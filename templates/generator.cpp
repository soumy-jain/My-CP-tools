#include <bits/stdc++.h>
#define ll        long long
#define ull       unsigned long long
#define SPEEDHACK ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

ll rand(int a, int b)
{
    return a + rand() % (b - a + 1);
}

int main()
{
    SPEEDHACK //file
    ll t,n; cin>>t>>n;
    cout<<t<<'\n';
    while(t--)
    {
        cout<<n<<'\n';
        for(ll i=0;i<n;i++)
        {
            if((i&1))
                cout<<-2;
            else
                cout<<rand(1,1000000000);
            cout<<"\n "[i!=n-1];
        }
    }
    return 0;
}
