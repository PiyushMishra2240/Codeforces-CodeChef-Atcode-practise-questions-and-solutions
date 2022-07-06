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
        string s,t;
        cin>>s>>t;
        ll a=0,b=0,c=0;
        unordered_map<char,ll> m;
        for (ll i = 0; i < s.size(); i++)
        {
           if(s[i] == 'a')
            ++a;
            else if(s[i] == 'b')
            ++b;
            else if(s[i] == 'c')
            ++c;
        }
        if(a==0 || b == 0 || c==0)
        {
            sort(s.begin(),s.end());
            cout<<s<<'\n';
        }
        else
        {
            if(t == "abc")
            {
                sort(s.begin(),s.end());
                string ans="";
                for (ll i = 0; i < a; i++)
                {
                    ans+='a';
                }
                for (ll i = 0; i < c; i++)
                {
                    ans+='c';
                }
                for (ll i = 0; i < b; i++)
                {
                    ans+='b';
                }
                for (ll i = (a+b+c); i < s.size(); i++)
                {
                    ans+=s[i];
                }
                
                cout<<ans<<'\n';
            }
            else
            {
                sort(s.begin(),s.end());
                cout<<s<<'\n';
            }
        }

    }
    
    return 0;
}