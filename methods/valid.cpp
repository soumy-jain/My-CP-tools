int dir[5] = {-1, 0, 1, 0, -1};
pair<int, int> moves[] = {{-1, 0}, {0, -1}, {0, 1}, {1, 0}};

bool valid(ll x, ll y, vector<vector<ll>> &v)
{
    return x>=0 && y>=0 && x<v.size() && y<v[0].size();
}