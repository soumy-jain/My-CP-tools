class Graph
{
  public:
    vector<vector<ll>> vg;
    vector<map<ll, ll>> ct;
    vector<ll> wt, vis;
    ll N;
    Graph(ll n) : N(n)
    {
        vg.resize(n);
        ct.resize(n);
        wt.resize(n);
        vis.resize(n);
    }
    void add(ll u, ll v)
    {
        u--, v--;
        vg[u].push_back(v);
        vg[v].push_back(u);
    }
    void add(ll u, ll v, ll k)
    {
        u--, v--;
        vg[u].push_back(v);
        vg[v].push_back(u);
        ct[u][v] = ct[v][u] = k;
    }
    void dfs(ll u)
    {
        vis[u] = 1;
        for (auto i : vg[u])
        {
            if (!vis[i])
            {
                dfs(i);
            }
        }
    }
};