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
        ll i=1,j=0;
        ll ans=0;
        if(n == 1)
        cout<<"0\n";
        else if(k == 1)
        cout<<n-k<<'\n';
        else
        {
            ll done=1;
            ll ans=0;
            while (done < k)
            {
                done*=2;
                ++ans;
            }
            if(done < n)
            ans+=((n-done+k-1)/k);
            cout<<ans<<'\n';
        }
    }   
    return 0;
}