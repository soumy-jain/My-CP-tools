const int N = 200005;

ll fact[N], inv[N], invfact[N];

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

void inCounting()
{
    fact[0] = inv[0] = invfact[0] = 1;
    fact[1] = inv[1] = invfact[1] = 1;

    for (ll i = 2; i < N; i++)
    {
        fact[i] = (fact[i - 1] * i) % MOD;
        inv[i] = ((MOD - MOD / i) * inv[MOD % i]) % MOD;
        invfact[i] = (invfact[i - 1] * inv[i]) % MOD;
    }
}

inCounting();