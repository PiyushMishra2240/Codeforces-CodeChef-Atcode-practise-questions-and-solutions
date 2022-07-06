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
    ll n,k;
    cin>>n>>k;
    ll even = n/2;
    ll odd = n - even;
    if(k > odd)
    {
        cout<<(k-odd)*2;
    }
    else
    {
        cout<<(2*k)-1;
    }
    
    return 0;
}