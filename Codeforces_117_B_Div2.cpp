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
        ll n,a,b;
        cin>>n>>a>>b;
        ll arr[n];
        arr[0] = a;
        arr[n-1] = b;
        ll j;
        for (ll i = 1 , j=0 ; i < n/2; i++)
        {
            if(n-j != b)
            arr[i] = n-j;
            else
            i--;
            ++j;
        }
        for (ll i = n-2; i >= n/2; i--)
        {
            if(n-j != a)
            arr[i] = n-j;
            else
            i++;
            j++;
        }
        for (ll i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}