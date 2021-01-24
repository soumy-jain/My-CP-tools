ll N=1000005;
vector <bool> prime;

void sieve()
{
    prime[0]=prime[1]=true;
    for(ll i=2;i*i<=N;i++)
    {
        if(prime[i]==false)
        {
            for(ll j=i*i;j<=N;j+=i)
            {
                prime[j]=true;
            }
        }
    }
}

prime.resize(N+1,false);
sieve();
