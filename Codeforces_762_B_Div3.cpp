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
        ll i=1,j=1;
        unordered_set<ll> s;
        while (i*i<=n)
        {
            s.insert(i*i);
            i++;
        }
        while (j*j*j<=n)
        {
            s.insert(j*j*j);
            j++;
        }
        cout<<s.size()<<'\n';
    }
    return 0;
}