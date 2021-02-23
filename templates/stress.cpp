// clang-format off
#include <bits/stdc++.h>
#define ll        long long
#define ull       unsigned long long
#define SPEEDHACK ios_base::sync_with_stdio(false);cin.tie(NULL);
#define Tc        ll tc; cin>>tc; while(tc--)
#define Qu        ll qu; cin>>qu; while(qu--)
#define ff        first
#define ss        second
#define sz(v)     (ll)(v).size()
#define file      freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define MOD       1000000007      // 998244353
using namespace std;
/******************************************************************************/
void __print(int x) { cerr << x; }
void __print(long x) { cerr << x; }
void __print(ll x) { cerr << x; }
void __print(unsigned x) { cerr << x; }
void __print(unsigned long x) { cerr << x; }
void __print(ull x) { cerr << x; }
void __print(float x) { cerr << x; }
void __print(double x) { cerr << x; }
void __print(long double x) { cerr << x; }
void __print(char x) { cerr << '\'' << x << '\''; }
void __print(const char *x) { cerr << '\"' << x << '\"'; }
void __print(const string &x) { cerr << '\"' << x << '\"'; }
void __print(bool x) { cerr << (x ? "true" : "false"); }

template<typename T, typename V>
void __print(const pair<T, V> &x) { cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}'; }
template<typename T>
void __print(const T &x) { int f = 0; cerr << '{'; for (auto &i : x) cerr << (f++ ? "," : ""), __print(i); cerr << "}"; }
void _print() { cerr << "]\n"; }
template <typename T, typename... V>
void _print(T t, V... v) { __print(t); if (sizeof...(v)) cerr << ", "; _print(v...); }
#ifndef ONLINE_JUDGE
#define dbg(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define dbg(x...)
#endif
// clang-format on

mt19937_64 rng(chrono::high_resolution_clock::now().time_since_epoch().count());

ll rand(ll a, ll b)
{
    return (ll)(rng() % (b - a + 1)) + a;
}

ll brute(vector<ll> &v, ll n)
{
    int ans = 0;

    return ans;
}

ll op(vector<ll> &v, ll n)
{
    int ans = 0;

    return ans;
}

int main()
{

    ll t = 10000;
    while (t--)
    {
        ll n = rand(1, 10);
        vector<ll> v(n);
        const ll N = n;
        for (int i = 0; i < n; i++)
            v[i] = rand(1, N);
        int na = brute(v, n);
        int opa = op(v, n);
        if (na == opa)
            cout << "YES\n";
        else
        {
            cout << "NO\n";
            cout << n << '\n';
            for (auto i : v)
                cout << i << " ";
            cout << '\n';
            cout << na << '\n';
            cout << opa << '\n';
            break;
        }
    }
}