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
        ll arr[3];
        for (ll i = 0; i < 3; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+3);
        ll sum = arr[0] + arr[2] - 2*arr[1];
        if(sum%3 == 0)
        cout<<"0\n";
        else
        cout<<"1\n";
    }
    
    return 0;
}