class RollingHash {
    string s;
    int n, pn;
    vector<ll> primes = {1000000009, 100000007};
    const ll base = 31;
    vector<vector<ll>> hval, powbase;

  public:
    RollingHash(string S) {
        s = S;
        n = s.length();
        pn = primes.size();
        hval.resize(pn);
        powbase.resize(pn);
        for (int i = 0; i < pn; i++) {
            powbase[i].resize(n + 1);
            powbase[i][0] = 1;
            for (int j = 1; j <= n; j++) {
                powbase[i][j] = (base * powbase[i][j - 1]) % primes[i];
            }
        }
        for (int i = 0; i < pn; i++) {
            hval[i].resize(n + 1);
            for (int j = 0; j < n; j++) {
                hval[i][j] = (s[j] - 'a' + 1) * powbase[i][j] % primes[i];
                hval[i][j] =
                    (hval[i][j] + (j > 0 ? hval[i][j - 1] : 0LL)) % primes[i];
            }
        }
    }
    vector<ll> getHash(int l, int r) {
        vector<ll> hash(primes);
        for (int i = 0; i < pn; i++) {
            ll val1 = hval[i][r];
            ll val2 = l > 0 ? hval[i][l - 1] : 0LL;
            hash[i] = mulM(subM(val1, val2, primes[i]),
                           modInverse(powbase[i][l], primes[i]), primes[i]);
        }
        return hash;
    }
    bool comp(int l1, int r1, int l2, int r2) {
        if (l1 > l2) {
            swap(l1, l2);
            swap(r1, r2);
        }
        for (int i = 0; i < pn; i++) {
            ll val1 =
                subM(hval[i][r1], (l1 > 0 ? hval[i][l1 - 1] : 0LL), primes[i]);
            ll val2 =
                subM(hval[i][r2], (l2 > 0 ? hval[i][l2 - 1] : 0LL), primes[i]);
            if (mulM(val1, powbase[i][l2 - l1], primes[i]) != val2)
                return false;
        }
        return true;
    }
};