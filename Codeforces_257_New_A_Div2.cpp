#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const long long mod = 1000000007;
int main()
{
    #ifndef ONLINE_JUDGE
         freopen("input.txt","r",stdin);
         freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll x,y,n;
    cin>>x>>y>>n;
    
    if(n%3 == 2)
    {
        if(n%2 == 0)
        { 
            ll temp = y%mod;
            temp += mod;
            cout<<temp%mod;
        }
            
        else if(n%2 == 1)
        {   
            y *=-1;
            ll temp = y%mod;
            temp += mod;
            cout<<temp%mod;
        }
            
    }
    else if(n%3 == 1)
    {
        if(n%2 == 1)
        {
            ll temp = x%mod;
            temp += mod;
            cout<<temp%mod;
        }
        else if(n%2 == 0)
        {
            x*=-1;
            ll temp = x%mod;
            temp += mod;
            cout<<temp%mod;
        }
    }
    else
    {
        if(n%2 == 0)
        {
            ll temp = (x-y)%mod;
            temp += mod;
            cout<<temp%mod;
        }
        else
        {
            ll temp = (y-x)%mod;
            temp += mod;
            cout<<temp%mod;
        }
    }
    return 0;
}