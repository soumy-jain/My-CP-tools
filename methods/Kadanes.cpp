ll kadanes(vector<ll> &v)
{
    ll sum = 0, ans = LLONG_MIN;
    for (auto i : v)
    {
        sum = max(sum + i, i);
        ans = max(ans, sum);
    }
    return ans;
}