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

    int n,f=0;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i+1] - arr[i] > 1)
        {   
            f=1;
            cout<<arr[i] + 1;
            break;
        }
    }
    if(f==0)
    {
        if(arr[0] >= 2)
        cout<<"1";
        else
        {
            cout<<arr[n-1] + 1;
        }
    }
    return 0;
}