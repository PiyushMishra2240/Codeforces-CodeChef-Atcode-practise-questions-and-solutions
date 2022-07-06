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
    while(t--){
        ll n;
        cin>>n;
        vector<ll> a(n);
        vector<ll> bits(34);
        vector<ll> even,odd;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==1)odd.push_back(a[i]);
            else even.push_back(a[i]);
        }
        for(ll i=0;i<even.size();i++){
            ll j=1,cnt=1;
            while(cnt<=even[i]){
                if(even[i]&cnt)bits[j]++;
                j++;
                cnt*=2;
            }
        }
        if(odd.size() == n){
            bool flag=true;
            for(ll i=0;i<n-1;i++){
                if(odd[i]!=odd[i+1]){
                    flag=false;
                    break;
                }
            }
            if(!flag)
            cout<<odd.size()-1<<'\n';
            else cout<<"0\n";
            continue;
        }
        ll ans=0;
        ll mx=0;
        for(ll i=0;i<34;i++){
            mx=max(bits[i],mx);
        }
        if(even.size() == n){
            bool flag=true;
            for(ll i=0;i<n-1;i++){
                if(odd[i]!=odd[i+1]){
                    flag=false;
                    break;
                }
            }
            if(!flag)
            cout<<mx<<'\n';
            else cout<<"0\n";
            continue;
        }
        ans=mx;
        if(odd.size() == 1)ans++;
        else ans+=odd.size()-1;
        cout<<ans<<'\n';
    }
    return 0;
}