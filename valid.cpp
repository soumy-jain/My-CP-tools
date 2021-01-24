bool valid(ll x, ll y, vector<vector<ll>> &v)
{
    return x>=0 && y>=0 && x<v.size() && y<v[0].size();
}