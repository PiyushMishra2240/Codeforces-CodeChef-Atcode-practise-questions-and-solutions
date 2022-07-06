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
        ll l1,r1,l2,r2;
        cin>>l1>>r1>>l2>>r2;
        if(l2>=l1 && l2<=r1)cout<<l2<<'\n';
        else if(l1>=l2 && l1<=r2)cout<<l1<<'\n';
        else cout<<l1+l2<<'\n';
    }
    return 0;
}