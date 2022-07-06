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
        cin>>n;
        string s;
        cin>>s;
        if(n == 1 && s[0] != 'W')
        {
            cout<<"NO\n";
            continue;
        }
        else if(n == 1 && s[0] == 'W')
        {
            cout<<"YES\n";
            continue;
        }
        ll cntr=0,cntb=0,f=1;
        for (ll i = 0; i < n; i++)
        {
            if(s[i] == 'W')
            {
                if((cntr >0 && cntb == 0) || (cntb>0 && cntr == 0))f=0;
                cntr=0;
                cntb=0;
            }
            else if(s[i] == 'B')cntb++;
            else cntr++;
        }
        if((cntr >0 && cntb == 0) || (cntb>0 && cntr == 0))f=0;
        if(f)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}