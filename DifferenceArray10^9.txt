ll n,ans=0; cin>>n;
map<ll,ll> M;
vector<pair<ll,ll>> vp;
for(ll i=0;i<n;i++)
{
    ll x,y,z; cin>>x>>y>>z;
    M[x]+=z;
    M[y+1]-=z;
}
for(auto &i:M)
    vp.push_back({i.first,i.second});
ll k=0,x=0;
for(ll i=0;i<vp.size();i++)
{
    k+=vp[i].second;
    ans+=k;
    if(i+1<vp.size())
        ans+=(vp[i+1].first-vp[i].first-1)*k;
}
cout<<ans;
