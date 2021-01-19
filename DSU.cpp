// vector<ll> parent, Rank;

ll find(ll v)
{
    return parent[v]==v ? v : v=find(parent[v]);
}

void merge(ll u, ll v)
{
    u=find(u);
    v=find(v);
    if(Rank[v]<Rank[u])
        swap(v,u);
    parent[u]=v;
    Rank[v]+=Rank[u];
}

// parent.resize(n+1);
// Rank.resize(n+1,1);
// iota(parent.begin(),parent.end(),0);
