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
        ll e=0,n=0;
        for (ll i = 0; i < s.size(); i++)
        {
            if(s[i] == 'E')
            e++;
            else if(s[i] == 'N')
            ++n;
        }
        if((e>=s.size()/2 && e != s.size()) || (n>=s.size()/2 && n!=s.size()))
        cout<<"NO\n";
        else
        cout<<"YES\n";
    }
    return 0;
}