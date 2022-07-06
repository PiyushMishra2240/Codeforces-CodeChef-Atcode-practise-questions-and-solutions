#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

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
        if(n&1)
        {
            cout<<"NO\n";
            continue;
        }
        ll f=0;
        vector<ll> v(26,0);
        for (ll i = 0; i < s.size(); i++)
        {
            v[s[i]-'a']++;
        }
        for (ll i = 0; i < v.size(); i++)
        {
            if(v[i] > n/2)
            {
                cout<<"NO\n";
                f=1;
                break;
            }
        }
        if(f==0)
        {
            cout<<"YES\n";
            sort(s.begin(),s.end());
            reverse(s.begin(),s.begin()+n/2);
            cout<<s<<'\n';
        }
    }
    return 0;
}
