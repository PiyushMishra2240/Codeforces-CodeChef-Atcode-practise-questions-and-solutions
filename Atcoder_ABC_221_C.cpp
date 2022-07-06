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

    string s;
    cin>>s;
    ll ans=0;
    sort(s.begin(),s.end());
    do
    {
        for (ll i = 1; i < s.size(); i++)
        {
            ll l=0,r=0;
                for (ll j = 0; j < i; j++)
                {
                    l = l*10 + s[j]-'0';
                }
                for (ll j = i; j < s.size(); j++)
                {
                    r = r*10 + s[j]-'0';
                }
                ans = max(ans,l*r);
        }
    }while(next_permutation(s.begin(),s.end()));

    cout<<ans;
    return 0;
}