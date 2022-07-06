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
        ll a,b,n;
        cin>>a>>b>>n;
        if(n%3 == 0)
        cout<<a<<'\n';
        else if(n%3 == 1)
        cout<<b<<'\n';
        else if(n%3 == 2)
        cout<<(a^b)<<'\n';
    }
    return 0;
}