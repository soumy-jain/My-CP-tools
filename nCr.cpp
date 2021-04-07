ll nCr(ll n, ll r)
{
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