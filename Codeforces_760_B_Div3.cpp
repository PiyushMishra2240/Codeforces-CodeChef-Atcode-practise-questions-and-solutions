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
        ll n,count=0;
        cin>>n;
        ll h = n;
        ll temp = n-3;
        n = n-2;
        string ans="";
        string x="";
        ll i=0;
        if(n == 1)
        {
            cin>>ans;
            cout<<ans<<"b\n";
        }
        else
        {
            while (n--)
            {
                string s;
                cin>>s;
                x += s;
                if(i == 0)
                {
                    ans+=s;
                    i++;
                    count+=1;
                }
                else
                {
                    if(x[count] == s[0])
                    {
                        ans+=s[1];
                        count+=2;
                        i++;
                    }
                    else
                    {
                        ans+=s;
                        count+=2;
                        i++;
                    }
                }
            }
            if(ans.length() < h)
            {
                ans+=x[count];
                cout<<ans<<'\n';
            }
            else
            cout<<ans<<'\n';   
        }
    }
    return 0;
}