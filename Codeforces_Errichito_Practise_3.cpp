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

    ll n;
    cin>>n;
    vector<ll> v;
    ll q = (n-2)/2;
    ll r = (n-2)%2;
    while (q--)
    {
        v.push_back(2);
    }
    v.push_back(r+2);
    cout<<v.size()<<"\n";
    for (ll i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
    return 0;
}