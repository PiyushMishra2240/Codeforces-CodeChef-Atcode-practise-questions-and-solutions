#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll power(ll n, ll times)
{
    ll ans=1;
    for (ll i = 0; i < times; i++)
    {
        ans*=n;
    }
    return ans;
}

int main()
{
    #ifndef ONLINE_JUDGE
         freopen("input.txt","r",stdin);
         freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin>>t;
    while (t--)
    {
        string s,t;
        cin>>s>>t;
        if(t.size() == 1 && t == "a")cout<<"1\n";
        else if(find(t.begin(),t.end(),'a')!=t.end())cout<<"-1\n";
        else cout<<power(2,s.size())<<'\n';
    }
    return 0;
}