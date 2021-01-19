ll n;
vector<bool> prime;

void sieve()
{
    prime[0]=prime[1]=true;
    for(ll i=2;i*i<=n+1;i++)
    {
        if(prime[i]==false)
        {
            for(ll j=i*i;j<=n+1;j+=i)
            {
                prime[j]=true;
            }
        }
    }
}

prime.resize(n+5,false);
sieve();