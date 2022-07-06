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
        ll n;
        cin>>n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        if(n == 1)
        {
            cout<<a[0]<<" \n0";
            continue;
        }
        vector<ll> z,one;
        for (ll i = 0; i < n; i++)
        {
            if(i%2==0)z.push_back(a[i]);
            else one.push_back(a[i]);
        }
        sort(z.begin(),z.end(),greater<ll>());
        sort(one.begin(),one.end());
        vector<ll> ans;
        ll cnt=0;
        for (ll i = 0; i < n; i++)
        {
            ans.push_back(z[i]);
            ans.push_back(one[i]);
        }
        for (ll i = 0; i < n; i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<'\n';
        // for (ll i = 0; i < one.size(); i++)
        // {
        //     cout<<one[i]<<" ";
        // }
        // cout<<'\n';
        ll ss=one.size();
        vector<ll> suffix(ss);
        suffix[ss-1]=one[ss-1];
        for(ll i=ss-2;i>=0;i--)
        {
            suffix[i]=suffix[i+1]+one[i];
        }
        // for (ll i = 0; i < suffix.size(); i++)
        // {
        //     cout<<suffix[i]<<" ";
        // }
        // cout<<'\n';
        for (ll i = 0; i < ss; i++)
        {
            cnt+=z[i]*suffix[i];
        }

        // vector<ll> prefix(z.size());
        // prefix[0]=z[0];
        // for (ll i = 1; i < z.size(); i++)
        // {
        //     prefix[i]=prefix[i-1]-z[i];
        // }
        // for (ll i = 0; i < prefix.size(); i++)
        // {
        //     cout<<prefix[i]<<" ";
        // }
        // cout<<'\n';
        // for (ll i = 0; i < z.size(); i++)
        // {
        //     cnt+=one[i]*prefix[i];
        // }
        cout<<cnt<<'\n';
    }
    return 0;
}