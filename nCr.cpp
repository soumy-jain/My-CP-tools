ll nCr(ll n, ll r)
{
    if (r > n || r < 0 || n < 0)
        return 0;
    ll p = 1, k = 1, m;
    if (n - r < r)
        r = n - r;
    if (r != 0)
    {
        while (r)
        {
            p *= n--;
            k *= r--;
            m = __gcd(p, k);
            p /= m;
            k /= m;
        }
    }
    return p;
}
