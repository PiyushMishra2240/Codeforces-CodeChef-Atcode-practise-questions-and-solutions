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
        ll l1,l2,l3,f=0;
        cin>>l1>>l2>>l3;
        if((l1+l2) == l3 || (l2+l3 == l1) || (l1+l3 == l2))
        cout<<"YES\n";
        else if((l1==l2 && l3%2==0) || (l2==l3 && l1%2==0) || (l1==l3 && l2%2==0))
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    
    return 0;
}