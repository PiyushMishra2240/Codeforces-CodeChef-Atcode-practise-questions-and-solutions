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
    vector<ll> bi;
    while (n)
    {
        ll rem=n%2;
        n/=2;
        bi.push_back(rem);
    }
    cout<<bi.size();
    return 0;
}