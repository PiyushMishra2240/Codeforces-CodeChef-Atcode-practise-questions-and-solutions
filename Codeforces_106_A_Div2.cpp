#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
         freopen("input.txt","r",stdin);
         freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);
    cin.tie(0);

    int k;
    cin>>k;
    int arr[12];
    for (int i = 0; i < 12; i++)
    {
        cin>>arr[i];
    }
    if(k == 0)
    cout<<"0";
    else 
    {
        sort(arr,arr+12,greater<int>());
        int ans=0,sum=0;
        for (int i = 0; i < 12; i++)
        {
            sum+=arr[i];
            ans++;
            if(sum >= k)
            break;
        }
        if(sum < k)
        cout<<"-1";
        else
        cout<<ans;
    }
    return 0;
}