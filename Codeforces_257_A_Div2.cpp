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

    int n,m,index=0,maximum = 0;
    cin>>n>>m;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        arr[i] = ceil(1.0*(arr[i])/m);
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i] >= maximum)
        {
            index = i+1;
            maximum = arr[i];
        }
    }
    cout<<index;
    return 0;
}