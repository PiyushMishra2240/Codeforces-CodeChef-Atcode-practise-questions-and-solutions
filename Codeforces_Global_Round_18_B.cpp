#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
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
    vector<ll> bits(200001);
    ll j=1;
    for (ll i = 2; i < 200001; i++)
    {
        if(i%2==0 && i != 2)
        {
            j++;
            bits[i]=j;
        }
        else
        {
            bits[i]=j;
        }
    }
    // for (ll i = 1; i < bits.size(); i++)
    // {
    //     cout<<bits[i]<<' ';
    // }
    
    while (t--)
    {
        ll l,r;
        cin>>l>>r;
        cout<<bits[r]-bits[l]<<'\n';
    }
    return 0;
}