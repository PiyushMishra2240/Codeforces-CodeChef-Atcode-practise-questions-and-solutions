#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    #ifndef ONLINE_JUDGE
         freopen("input.txt","r",stdin);
         freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll arr1[5],sum1 = 0;
    ll arr2[5],sum2 = 0;
    
    for (ll i = 0; i < 5; i++)
    {
        cin>>arr1[i];
        sum1 += arr1[i];
    }
    for (ll i = 0; i < 5; i++)
    {
        cin>>arr2[i];
        sum2 += arr2[i];
    }
    if(sum1 >= sum2)
    cout<<"Blue";
    else if(sum1 < sum2)
    cout<<"Red";
    return 0;
}