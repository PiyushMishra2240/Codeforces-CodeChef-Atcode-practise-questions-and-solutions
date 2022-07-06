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

    int n,k;
    cin>>n>>k;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int ans = ceil(1.0*n/(k+1));
    for (int i = 1; i <= n-1; i++)
    {
        arr[i] += arr[i-1];
    }
    cout<<arr[ans-1];
    return 0;
}