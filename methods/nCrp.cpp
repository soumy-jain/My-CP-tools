ll nCrp(ll n, ll r)
{
    r = min(r, n - r);
    ll ans = 1;
    for (int i = 1; i <= r; i++)
    {
        ans = ans * (n - i + 1) % MOD;
        ans = ans * modInverse(i) % MOD;
    }
    return (ans + MOD) % MOD;
}