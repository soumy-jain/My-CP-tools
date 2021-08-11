// const ll MOD=1000000007
ll powmod(ll x, ull y) 
{ 
    if (y == 0) return 1; 
    ll p = powmod(x, y/2) % MOD; 
    p = (p * p) % MOD; 
    return (y%2 == 0)? p : (x * p) % MOD; 
}

ll modInverse(ll a) 
{
    return powmod(a, MOD-2)%MOD;
}
