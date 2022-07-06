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
       string a,s;
       vector<ll> b;
       cin>>a>>s;
       ll a1 = stoi(a);
       ll s1 = stoi(s);
       ll f=0;
       while (s1)
       {
           if(s1%10 - a1%10 < 0)
           {
               ll d = s1%100;
               ll sd = a1%10;
               ll ans =(10+d-sd)%10;
               if(ans + sd == d)
               b.push_back(s1%100 - a1%10);
               else
               {
                   f=1;
                   break;
               }
               s1 /= 100;
               a1 /= 10;
           }
           else
           {
               b.push_back(s1%10 - a1%10);
               s1 /= 10;
               a1 /= 10;
           }
       }
       if(f==0 && a1 == 0)
       {
           ll g=0;
            reverse(b.begin(),b.end());
            for (ll i = 0; i < b.size(); i++)
            {
                if(b[i] == 0 && g==0)
                continue;
                else
                {
                    cout<<b[i];
                    g=1;
                }
            }
            cout<<'\n';
       }
        else
        cout<<"-1\n";
    }
    return 0;
}