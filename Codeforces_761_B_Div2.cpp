#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

// bool prime(ll x)
// {
//     if(x%2 == 0)
//     return false;

//     for (ll i = 3; i < x; i+=2)
//     {
//         if(x%i == 0)
//         return false;
//     }
//  return true;   
// }

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
        ll temp = n-1;
        ll a,b;
        for (ll i = temp-2; i >= 2; i--)
        {
            if(__gcd(i,temp-i) == 1)
            {
                a=i;
                break;
            }
        }
        cout<<a<<" "<<temp-a<<" "<<"1\n";
    }
    
    return 0;
}