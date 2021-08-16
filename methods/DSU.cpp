class DSU
{
  public:
    vector<int> parent, Rank;
    int N;
    DSU(int N) : N(N)
    {
        parent.resize(N);
        iota(parent.begin(), parent.end(), 0);
        Rank.resize(N, 1);
    }
    void merge(int u, int v);
    int find(int u);
};

int DSU::find(int u)
{
    return (parent[u] == u ? u : (parent[u] = find(parent[u])));
}

void DSU::merge(int u, int v)
{
    if ((u = find(u)) == (v = find(v)))
        return;
    if (Rank[v] < Rank[u])
        swap(v, u);
    parent[u] = v;
    Rank[v] += Rank[u];
}

// DSU d(n), d.merge(u,v), d.find(u), d.N
