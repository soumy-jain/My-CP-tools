// Disclaimer: Don't copy my template, it may lead to plagiarism.
/* Author: Soumy Jain
   Handle: soumy_jain || soumyjain
   "Beautiful flowers too, eventually wither and fall. That's the fate of all living beings."
   "I hate perfection. To be perfect is to be unable to improve any furthur." - Mayuri Kurotsuchi | Bleach
   "I smile to show the pressure of heroes and to trick the fear inside of me."
   "Gravel may be gravel, but me? I'm the gravel that shatters diamonds."
   "If you were to write a story with me in the lead role, it would certainly be...a TRAGEDY." - Kaneki Ken | Tokyo Ghoul
*/
/******************************************************************************/
#include <bits/stdc++.h>
#define ll        long long
#define ull       unsigned long long
#define SPEEDHACK ios_base::sync_with_stdio(false);cin.tie(NULL);
#define Tc        ll tc; cin>>tc; while(tc--)
#define Qu        ll qu; cin>>qu; while(qu--)
#define file      freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define MOD       1000000007      // 998244353
using namespace std;
/******************************************************************************/
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(ll x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(ull x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

// Power
ll powmod(ll x, ull y) 
{ 
    if (y == 0) return 1; 
    ll p = powmod(x, y/2) % MOD; 
    p = (p * p) % MOD; 
    return (y%2 == 0)? p : (x * p) % MOD; 
}
// Multiplicative Inverse
ll modInverse(ll a) 
{  return powmod(a, MOD-2)%MOD;  }
// Least Common Multiple
ll lcm(ll a,ll b)
{  return (a*b)/__gcd(a,b);  }
// Ascending
bool sortbysec(const pair<ll,ll>&a,const pair<ll,ll>&b)
{  return a.second<b.second;  }
// ceil
ll myceil(ll x, ll y)
{  return (x+y-1)/y;  }
// Factorial
ll fact(ll n)
{
    ll f=1;
    for(ll i=2;i<=n;i++)
        f*=i;
    return f;
}
//  is int?
bool isint(double n)
{  return floor(n)==ceil(n);  }
// Prime numbers upto n
void sieve(ll n) 
{ 
    vector<bool>prime(n+1,true);
    for (ll p=2; p*p<=n; p++) 
    {
        if (prime[p] == true) 
            for (ll i=p*p; i<=n; i += p)
                prime[i] = false; 
    }
    for (ll p=2; p<=n; p++) 
        if (prime[p])
            cout << p << " "; 
}
// Binary Search
ll bs(vector <ll> &v, ll key)
{
    ll r=v.size()-1,l=0;
    while (r >= l)
    {
        ll m = l + (r - l) / 2;
        if (v[m] == key) return m;
        else if (v[m] < key) l = m + 1;
        else r = m - 1;
    }
    return -1;
}
// All distinct factors of a number (including 1 and n itself)
vector<ll> factors(ll n)
{
    vector<ll>v;
    for(ll i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            v.push_back(i);
            if(n/i!=i)
                v.push_back(n/i);
        }
    }
    return v;
}
// Print vector
void prtvec(vector<ll> &v)
{
    for(auto i: v)
        cout<<i<<" ";
    cout<<'\n';
}
/***********************************MAIN***************************************/
// Are you ready to face the wrath of test cases? Good luck noob Soumy!

int main()
{
    SPEEDHACK //file
    
    return 0;
}
