#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
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
        ll n;
        string s;
        cin>>n>>s;
        string ans="";
        ll i=0;
        for (i = 0; i < n-1; i++)
        {
            if(s[i+1] > s[i])
            {
                break;
            }
        }
        for (ll j = 0; j <= i; j++)
        {
            ans+=s[j];
        }
        for (ll j = ans.size()-1; j >= 0; j--)
        {
            ans+=ans[j];
        }
        if(s[0] == s[1])
        cout<<s[0]<<s[1]<<'\n';
        else
        cout<<ans<<'\n';
    }
    return 0;
}