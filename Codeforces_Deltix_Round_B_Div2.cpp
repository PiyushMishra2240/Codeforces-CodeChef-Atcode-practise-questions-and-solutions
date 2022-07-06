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

    ll n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    ll abc = 0;
    for (ll i = 0; i < n-2; i++)
    {
        if(s[i] == 'a' && s[i+1] == 'b' && s[i+2] == 'c')
        {
            ++abc;
            i += 2;
        }
    }
    //cout<<abc<<'\n';
    while (q--)
    {
        ll p;
        char c;
        cin>>p>>c;
        //cout<<c<<"\n";
        if(s[p-1] == 'a')
        {
            if(s[p] == 'b' && s[p+1] == 'c')
            {
                if(c != 'a')
                {
                    --abc;
                    cout<<abc<<'\n';
                }
                else
                cout<<abc<<'\n';
            }
        }
        else if(s[p-1] == 'b')
        {
            if(s[p-2] == 'a' && s[p] == 'c')
            {
                if(c != 'b')
                {
                    --abc;
                    cout<<abc<<'\n';
                }
                else
                cout<<abc<<'\n';
            }
        }
        else if(s[p-1] == 'c')
        {
            if(s[p-3] == 'a' && s[p-2] == 'b')
            {
                if(c != 'c')
                {
                    --abc;
                    cout<<abc<<'\n';
                }
                else
                cout<<abc<<'\n';
            }
        }
    }
    return 0;
}