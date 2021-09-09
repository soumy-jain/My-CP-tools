#include <bits/stdc++.h>
#define ll long long
using namespace std;

mt19937_64 rng(chrono::high_resolution_clock::now().time_since_epoch().count());

ll myrand(ll a, ll b)
{
    return (ll)(rng() % (b - a + 1)) + a;
}

int main()
{
    // cout<<1<<'\n';
    int n = myrand(2, 5);
    cout << n << '\n';
    vector<pair<int, int>> edges;
    for (int i = 2; i <= n; ++i)
    {
        edges.emplace_back(myrand(1, i - 1), i);
    }

    vector<int> perm(n + 1); // re-naming vertices
    for (int i = 1; i <= n; ++i)
    {
        perm[i] = i;
    }
    random_shuffle(perm.begin() + 1, perm.end());

    random_shuffle(edges.begin(), edges.end()); // random order of edges

    for (pair<int, int> edge : edges)
    {
        int a = edge.first, b = edge.second;
        if (myrand(1, 50) % 2)
        {
            swap(a, b); // random order of two vertices
        }
        printf("%d %d\n", perm[a], perm[b]);
    }
}