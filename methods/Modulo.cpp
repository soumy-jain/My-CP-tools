ll powmod(ll x, ll y, ll M) {
    if (y == 0)
        return 1;
    ll p = powmod(x, y / 2, M) % M;
    p = (p * p) % M;
    return (y % 2 == 0) ? p : (x * p) % M;
}

ll modInverse(ll a, ll M) { return powmod(a, M - 2, M) % M; }

ll addM(ll a, ll b, ll M) {
    a = a % M;
    b = b % M;
    return (((a + b) % M) + M) % M;
}
ll mulM(ll a, ll b, ll M) {
    a = a % M;
    b = b % M;
    return (((a * b) % M) + M) % M;
}
ll subM(ll a, ll b, ll M) {
    a = a % M;
    b = b % M;
    return (((a - b) % M) + M) % M;
}
ll divM(ll a, ll b, ll M) {
    a = a % M;
    b = b % M;
    return (mulM(a, modInverse(b, M), M) + M) % M;
}