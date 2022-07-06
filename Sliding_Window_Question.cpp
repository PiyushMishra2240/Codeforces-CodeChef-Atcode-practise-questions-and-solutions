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
    ll arr[n];
    deque<ll> v;
    for (ll i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    ll i=0,j=0;
    while(j < n)
    {
        if(j-i+1 < k)
        {
            if(arr[j] < 0)
            v.push_back(arr[j]);
            j++;
        }
        else if(j-i+1 == k)
        {
            if(v.empty())
            cout<<"0 ";
            else
            {
                cout<<v.front()<<" ";
            }
            if(arr[i] == v.front())
            v.pop_front();
            i++;
            j++;
            if(arr[j] < 0)
            v.push_back(arr[j]);
        }
    }
    return 0;
}