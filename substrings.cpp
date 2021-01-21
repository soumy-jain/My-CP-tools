void get(string &s)
{
    for(ll i=0;i<s.length();i++)
    {
        for(ll j=1;j<=s.length()-i;j++)
        {
            string t=s.substr(i,j);
        }
    }
}