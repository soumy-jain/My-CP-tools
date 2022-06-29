class Combinatorics
{
  public:
    ll N;
    vector<ll> fact, inv, invfact;
    Combinatorics(ll n) : N(n)
    {
        N++;
        fact.resize(N);
        inv.resize(N);
        invfact.resize(N);
        fact[0] = inv[0] = invfact[0] = 1;
        fact[1] = inv[1] = invfact[1] = 1;
        for (ll i = 2; i < N; i++)
        {
            fact[i] = (fact[i - 1] * i) % MOD;
            inv[i] = ((MOD - MOD / i) * inv[MOD % i]) % MOD;
            invfact[i] = (invfact[i - 1] * inv[i]) % MOD;
        }
    }
    ll nCr(ll n, ll r)
    {
        if (n < r)
            return 0;
        ll ans = fact[n];
        ans = (ans * invfact[r]) % MOD;
        ans = (ans * invfact[n - r]) % MOD;
        return ans;
    }
    ll nPr(ll n, ll r)
    {
        if (n < r)
            return 0;
        ll ans = fact[n];
        ans = (ans * invfact[r]) % MOD;
        ans = (ans * invfact[n - r]) % MOD;
        ans = (ans * fact[r]) % MOD;
        return ans;
    }
};
