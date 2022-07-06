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
        string s;
        cin>>s;
        ll s1=0,s2=0;
        for (ll i = 0; i < s.size()/2; i++)
        {
            s1+=s[i]-'0';
        }
        for (ll i = 3; i < 6; i++)
        {
            s2+=s[i]-'0';   
        }
        if(s1 == s2)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;   
}