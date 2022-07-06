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
        ll n,q;
        cin>>n>>q;
        vector<ll> a(n);
        ll sum=0;
        for (ll i = 0; i < n; i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        sort(a.begin(),a.end(),greater<ll>());
        vector<ll> psum(n);
        psum[0]=a[0];
        for (ll i = 1; i < n; i++)
        {
            psum[i]=psum[i-1]+a[i];
        }
        // for (ll i = 0; i < n; i++)
        // {
        //     cout<<psum[i]<<" ";
        // }
        // cout<<'\n';
        while (q--)
        {
            ll ss;
            cin>>ss;
            if(ss>sum)cout<<"-1\n";
            else if(ss == sum)cout<<n<<'\n';
            else
            {
                ll l=0,h=n-1;
                ll pos=1;
                while(l<=h)
                {
                    ll mid=l+(h-l)/2;
                    if(psum[mid] == ss)
                    {
                        pos=mid+1;
                        break;
                    }
                    if(psum[mid]<ss)l=mid+1;
                    else 
                    {
                        pos=mid+1;
                        h=mid-1;
                    }
                }
                // if(pos<n && psum[pos]<ss)
                // {
                //     if(h<n && psum[h]>ss)cout<<h+1<<'\n';
                //     else
                //     cout<<pos+1<<'\n';
                // }
                // else
                // if(psum[pos]>ss)cout<<"1\n";
                if(pos==0)pos++;
                cout<<pos<<'\n';
            }
        }
    }
    return 0;
}