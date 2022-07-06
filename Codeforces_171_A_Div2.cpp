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
    ll n,t,count1=0,count2=0,f=0;
    cin>>n>>t;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin>>arr[i];
        if(t >= arr[i])
        f=1;
    }
    ll count=1,ans=0,sum=arr[0];
    ll i=0,j=1;
    if(n == 1)
    {
        if(arr[0] <= t)
        cout<<"1";
        else
        cout<<"0";
    }
    else if(f==0)
    cout<<"0";
    else
    {
        while (j != n)
        {
            sum += arr[j];
            if(sum <= t)
            {
                j++;
                ++count;
            }
            else
            {
                sum -= arr[i];
                i++;
                j++;
            }
            ans = max(ans,count);
        }
        cout<<ans;

    }
    return 0;
}