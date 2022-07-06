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
    int n,m;
    cin>>n>>m;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int sum=0;
    int j=0;
    while (arr[j] < 0 && m > 0)
    {
        sum+= arr[j];
        j++;
        m--;
    }
    cout<<abs(sum);
    return 0;
}