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

ll t,n,pairs = 0;
cin>>t;
while (t--)
{
    pairs = 0;
    cin>>n;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    for (ll i = 0; i < n; i++)
    {
        for (ll j = i + 1; j < n; j++)
        {
            if(floor(sqrt(arr[i] * arr[j])) != ceil(sqrt(arr[i] * arr[j])))
                ++pairs;
        }   
    }
    cout<<pairs<<"\n";
    
}
return 0;

}