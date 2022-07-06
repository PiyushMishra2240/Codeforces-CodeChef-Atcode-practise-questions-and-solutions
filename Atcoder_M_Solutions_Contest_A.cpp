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

    string s,t;
    cin>>s>>t;
    ll diff = s[0] - t[0];
    ll f=0;
    if((diff) < 13)
    {
        for (ll i = 1; i < s.length(); i++)
        {
            if((s[i] - t[i]) != diff)
            {
                f=1;
                break;
            }  
        }
    }
    else
    {
        diff = t[0] - s[0];
        for (ll i = 1; i < s.length(); i++)
        {
            ll temp = 26 + (t[i]-s[i]);
            if(temp != diff)
            {
                f=1;
                break;
            }
        }
    }
    if(f==0)
    cout<<"Yes";
    else
    cout<<"No";
    return 0;
}