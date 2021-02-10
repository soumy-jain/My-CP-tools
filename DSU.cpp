vector<ll> parent, Rank;

ll find(ll v)
{
	return parent[v] == v ? v : v = find(parent[v]);
}

void merge(ll u, ll v)
{
	u = find(u);
	v = find(v);
	if (u == v)
		return;
	if (Rank[v] < Rank[u])
		swap(v, u);
	parent[u] = v;
	Rank[v] += Rank[u];
}

void DSU(ll N)
{
	parent.clear();
	Rank.clear();
	parent.resize(N);
	Rank.resize(N, 1);
	iota(parent.begin(), parent.end(), 0);
}

DSU(n + 50);
