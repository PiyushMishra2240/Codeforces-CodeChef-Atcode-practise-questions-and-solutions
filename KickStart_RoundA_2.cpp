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
        // ll n;
        // cin>>n;
        string s;
        cin>>s;
        ll sum=0;
        for (ll i = 0; i < s.size(); i++)
        {
            sum+=s[i]-'0';
        }
        // cout<<sum<<'\n';
        if(sum%9 == 0)
        {
            if(s.size() == 1)
            {
                cout<<"Case #"<<c<<": "<<s<<"0\n";
                c++;
            }
            else
            {
                 string ans;
                 ll in=1;
                 for (ll i = 0; i < s.size(); i++)
                {
                    if(i == in)
                    {
                        ans.push_back('0');
                        i--;
                        in=-1;
                    }
                    else
                    ans.push_back(s[i]);
                }

                cout<<"Case #"<<c<<": "<<ans<<"\n";
                c++;
            }
            continue;
        }
        ll d=ceil(1.0*sum/9);
        ll nextnum=9*d;
        ll add=nextnum-sum;
        string adds = to_string(add);
        ll in = -1;
        for (ll i = 0; i < s.size(); i++)
        {
            if(s[i] > adds[0])
            {
                in=i;
                break;
            }
        }
        string ans;
        for (ll i = 0; i < s.size(); i++)
        {
            if(i == in)
            {
                ans.push_back(adds[0]);
                in=-1;
                i--;
            }
            else
            {
                ans.push_back(s[i]);
            }
        }
        if(ans.size() == s.size())
        ans.push_back(adds[0]);
        cout<<"Case #"<<c<<": "<<ans<<'\n';
        c++;
        
    }
    return 0;
}