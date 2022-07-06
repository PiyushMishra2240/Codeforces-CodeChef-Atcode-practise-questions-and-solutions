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
        ll cnt=0,f=0;
        for (ll i = 0; i < n; i++)
        {
            f=0;
            if(a[i] != i+1)
            {
                ll start=i+2;
                ll end=a[i];
                while(start<=end)
                {
                    ll mid=start+(end-start)/2;
                    // cout<<a[i]%mid<<"\n";
                    if(a[i]%mid == i+1)
                    {
                        a[i]=a[i]%mid;
                        // cout<<a[i]<<" "; 
                        f=1;
                        break;
                    }
                    else if(a[i]%mid > i+1)
                    {
                        start=mid+1;
                    }
                    else
                    end=mid-1;
                }
                if(f==1)
                {
                    cnt++;
                }
                else
                {
                    cout<<"-1\n";
                    break;
                }
            }
        }
        sort(a.begin(),a.end());
        // for (ll i = 0; i < n; i++)
        // {
        //     cout<<a[i]<<" ";
        // }
        // cout<<'\n';
        bool check=true;
        for (ll i = 0; i < n; i++)
        {
            if(a[i] != i+1)
            {
                check=false;
                break;
            }
        }
        if(check)
        cout<<cnt<<'\n';
    }
    return 0;
}
