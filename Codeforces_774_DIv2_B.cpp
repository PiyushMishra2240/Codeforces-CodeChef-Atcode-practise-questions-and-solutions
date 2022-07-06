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
        sort(a.begin(),a.end());
        ll s1=a[0]+a[1],s2=a[n-1];
        if(s2 > s1)
        cout<<"YES\n";
        else
        {
            ll i=2,j=n-2;
            ll f=0;
            while (i<j)
            {
                s1+=a[i];
                i++;
                s2+=a[j];
                j--;
                if(s2>s1)
                break;
            }
            if(s2>s1)
            cout<<"YES\n";
            else
            cout<<"NO\n";
        }
    }
    
    return 0;
}