vector<vector<ll>> vg;
vector<bool> vis;

void dfs(ll u)
{
    vis[u] = true;
    for (auto i : vg[u])
    {
        if (!vis[i])
        {
            dfs(i);
        }
    }
}

void readg(ll n)
{
    for (ll i = 0; i < n - 1; i++)
    {
        ll u, v;
        cin >> u >> v;
        u--, v--;
        vg[u].push_back(v);
        vg[v].push_back(u);
    }
}

void DFS(ll N)
{
    vg.clear();
    vg.resize(N);
    vis.clear();
    vis.resize(N, false);
}

DFS(n);
