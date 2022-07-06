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
        string s;
        cin>>s;
        ll ob=0;
        string res;
        for (ll i = 0; i < s.size(); i++)
        {
            ll d=0;
            if(s[i]-'0'>ob)
            {
                d=s[i]-'0'-ob;
                ob+=d;
            }
            else if(s[i]-'0'<ob)
            {
                d=s[i]-'0'-ob;
                ob+=d;
            }
            if(d<0)
            {
                ll h=d;
                while (h++)
                {
                    res.push_back(')');
                }
                res.push_back(s[i]);
            }
            else if(d>0)
            {
                ll h=d;
                while (h--)
                {
                    res.push_back('(');
                }
                res.push_back(s[i]);
            }
            else if(d == 0)
            {
                res.push_back(s[i]);
            }
        }
        if(ob>0)
        {
            while (ob--)
            {
                res.push_back(')');
            }
        }
        cout<<res<<'\n';
    }
    return 0;
}