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
        string ar[n];
        map<string,ll> freq;
        for(int i = 0; i < n; i++)
        {
            cin>>ar[i];
            freq[ar[i]]++;
        }
        ll ans = 0;
        map<char,ll> af;
        for(int i = 0; i < n; i++)
        {
            af[ar[i][0]]++;
        }
        for(int i = 0; i < n; i++)
        {
            ans+= (af[ar[i][0]]-1) - (freq[ar[i]]-1);
            af[ar[i][0]]--;
            freq[ar[i]]--;
        }
        for(int i = 0; i < n; i++) 
        {
            freq[ar[i]]++;
        }
        for(int i = 0; i < n; i++)
        {
            af[ar[i][1]]++;
        }
        for(int i = 0; i < n; i++) 
        {
            ans+= (af[ar[i][1]]-1)-(freq[ar[i]]-1);
            af[ar[i][1]]--;
            freq[ar[i]]--;
        }
        cout<<ans<<'\n';
    }
    return 0;
}