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

void DFS(ll N)
{
    vg.clear();
    vg.resize(N);
    vis.clear();
    vis.resize(N, false);
}

DFS(n);