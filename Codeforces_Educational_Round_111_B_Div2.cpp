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
        ll n,a,b;
        string s;
        cin>>n>>a>>b>>s;
        ll x=0;
        for (ll i = 1; i < s.size(); i++)
        {
            if(s[i-1] != s[i])
            x++;
        }
        x++;
        ll op = floor(x/2) + 1;
        if(b>=0)
        {
            cout<<(a+b)*n<<'\n';
        }
        else
        cout<<a*n + b*op<<'\n';
    }
    return 0;
}