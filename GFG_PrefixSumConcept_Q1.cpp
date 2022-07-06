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
    int arr[n],pf[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    pf[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        pf[i] = pf[i-1] + arr[i];
    }
    
    for (int i = 1; i < n - 1; i++)
    {
        if(pf[i-1] == (pf[n-1] - pf[i]))
        {
            cout<<i;
            break;
        }
    }
    return 0;
}