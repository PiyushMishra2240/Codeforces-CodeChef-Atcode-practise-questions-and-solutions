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
        ll o=0,z=0;
        cin>>s;
        for (ll i = 0; i < s.size(); i++)
        {
            if(s[i] == '0')
            z++;
            else
            o++;
        }
        if(z==o)
        {
            cout<<z-1<<'\n';
            continue;
        }
        if(z==0&&o!=0 || o==0&&z!=0)
        {
            cout<<"0\n";
            continue;
        }
        if(z>o)
        {
            cout<<o<<'\n';
        }
        else
        {
            cout<<z<<'\n';
        }
    }
    return 0;
}