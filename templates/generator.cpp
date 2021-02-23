#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define SPEEDHACK ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

auto seed = chrono::high_resolution_clock::now().time_since_epoch().count();
mt19937_64 rng(seed);

ll rand(ll a, ll b)
{
    return (ll)(rng() % (b - a + 1)) + a;
}

int main()
{
    SPEEDHACK
    // file
    ll t, n;
    cin >> t >> n;
    cout << t << '\n';
    while (t--)
    {
        cout << n << '\n';
        for (ll i = 0; i < n; i++)
        {
            cout << rand(1, 1000000);
            cout << "\n "[i != n - 1];
        }
    }
    return 0;
}
