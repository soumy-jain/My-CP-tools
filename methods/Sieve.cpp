ll N = 1000005;
vector<bool> prime;

void sieve()
{
	prime[0] = prime[1] = false;
	for (ll i = 2; i * i <= N; i++)
	{
		if (prime[i] == true)
		{
			for (ll j = i * i; j < N; j += i)
			{
				prime[j] = false;
			}
		}
	}
}

prime.resize(N, true);
sieve();
