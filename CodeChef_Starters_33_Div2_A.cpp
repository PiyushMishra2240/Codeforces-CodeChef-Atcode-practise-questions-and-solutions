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
        ll ad=0,zeros=0;
        for (ll i = 0; i < n; i++)
        {
            if(s[i] == '0')
            zeros++;
        }
        for (ll i = 0; i < n-1; i++)
        {
            if(s[i] == '1' && s[i+1] == '1')
            {
                ad=1;
                break;
            }
        }
        if(zeros == n)
        {
            cout<<"0\n";
            continue;
        }
        else if(ad == 0)
        {
            cout<<"1\n";
            continue;
        }
        else
        cout<<"2\n";
    }
    return 0;
}