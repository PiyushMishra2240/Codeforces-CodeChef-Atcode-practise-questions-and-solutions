#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isPrime(ll y)
{
    for (ll i = 2; i <= sqrt(y); i++)
    {
        if(y%i==0)
        return false;
    }
    return true;
}

bool factors(ll x)
{
    ll count = 0;
    if(isPrime(x))
    count = 0;
    else
    count = 2;
    if(x%2 == 0)
    ++count;
    while (x%2 == 0)
    {
        x /=2;
    }
    for (ll i = 3; i <= sqrt(x); i+=2)
    {
        while (x%i==0)
        {
            ++count;
            x /=i;
        }
    }
    if(x > 2)
    {
        ++count;
    }
    if(count == 3)
    return true;
    else
    return false;
}

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
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin>>arr[i];
        if(factors(arr[i]))
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}