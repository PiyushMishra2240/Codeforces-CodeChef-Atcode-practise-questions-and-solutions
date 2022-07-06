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
        string s="abcdefghijklmnopqrstuvwxyz";
        if(n<=26)
        {
            for (ll i = 0; i < n; i++)
            {
                char c='a'+i;
                cout<<c;
            }
            cout<<'\n';
        }
        else
        {
            ll q=n/26;
            while (q--)
            {
                cout<<s;
            }
            if(n%26==1)
            cout<<'b'<<'\n';
            else
            {
                for (ll i = 0; i < n%26; i++)
                {
                    char c='a'+i;
                    cout<<c;
                }
                cout<<'\n';
            }
        }
    }
    return 0;
}