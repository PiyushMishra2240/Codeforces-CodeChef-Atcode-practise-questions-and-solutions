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
    ll c=1;
    while (t--)
    {
        cout<<"Case #"<<c<<": ";
        c++;
        string s,t;
        cin>>s>>t;
        ll ans=t.size()-s.size();
        ll i=0,j=0,cnt=0;
        while (j<t.size())
        {
            if(s[i] != t[j])
            {
                cnt++;
                j++;
            }
            else
            {
                i++;
                j++;
            }
        }
        if(i != s.size())
        cout<<"IMPOSSIBLE\n";
        else
        cout<<cnt<<'\n';
    }
    return 0;

}