ll kadanes(vector<ll> &v)
{
    ll meh=0, msf=LLONG_MIN;
    for(ll i=0;i<v.size();i++)
    {
        meh+=v[i];
        if(meh<v[i])
            meh=v[i];
        if(meh>msf)
            msf=meh;
    }
    return msf;
}
