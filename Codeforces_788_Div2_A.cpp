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
        ll neg=0,ch=0;
        for (ll i = 0; i < n; i++)
        {
            cin>>a[i];
            if(a[i]<0)neg++;
        }
        if(is_sorted(a.begin(),a.end()))
        {
            cout<<"YES\n";
            continue;
        }
        else
        {
            for (ll i = 0; i < n; i++)
            {
                if(neg>0 && a[i]>0)
                {
                    ch++;
                    a[i]*=-1;
                    neg--;
                }
                else if(a[i]<0)neg--;
                if(neg <= 0)break;
            }
            for(ll i=n-1;i>=0;i--)
            {
                if(ch > 0 && a[i]<0)
                {
                    a[i]*=-1;
                    ch--;
                }
                if(ch<=0)break;
            }
            if(is_sorted(a.begin(),a.end()))cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    return 0;
}