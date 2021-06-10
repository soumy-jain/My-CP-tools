vector<ll> primeFactor(ll n)
{
    vector<ll> v;
    while(n%2==0)
    {
        v.push_back(2);
        n/=2;
    }
    for(ll i=3;i*i<=n;i+=2)
    {
        while(n%i==0)
        {
            v.push_back(i);
            n/=i;
        }
    }
    if(n>2)
        v.push_back(n);
    return v;
}
