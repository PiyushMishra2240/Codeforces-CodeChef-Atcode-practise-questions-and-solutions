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
        ll n,k;
        cin>>n>>k;
        vector<ll> a(n);
        if(n == 1 && k == 1)cout<<"1\n";
        else if(n>1 && k == 1)cout<<"-1\n";
        else 
        {
            ll cnt=k-2;
            a[0]=1;
            ll j=2;
            ll i=1;
            while(cnt>0)
            {
                a[i]=j;
                i++;
                j++;
                cnt--;
            }
            ll tt=n;
            while (tt>=j)
            {
                a[i]=tt;
                i++;
                tt--;
            }
            for (ll i = 0; i < n; i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<'\n';
        }
    }
    return 0;
}