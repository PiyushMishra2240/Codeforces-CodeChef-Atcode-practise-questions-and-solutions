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

    int n;
    cin>>n;
    int arr[7];
    for (int i = 0; i < 7; i++)
    {
        cin>>arr[i];
    }
    int j=0;
    while (n>0)
    {
        if(j>6)
        j=0;
        n -= arr[j];
        j++;
    }
    cout<<j;
    return 0;
}