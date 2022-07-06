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
        ll n,f = 0;
        string s;
        cin>>n;
        cin>>s;
        for (ll i = 0; i < n-1; i++)
        {
            if(s[i] =='L' && s[i+1] == 'L' )
            {
                cout<<"YES\n";\
                f = 1;
                break;
            }
            else if(s[i] == 'R' && s[i+1] == 'R')
            {
                cout<<"YES\n";
                f = 1;
                break;
            }
        }
            if(f == 0)
            cout<<"NO\n";
    }
    return 0;
}