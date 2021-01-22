vector<ll> factors(ll n) // [1, n]
{
    vector<ll> v;
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