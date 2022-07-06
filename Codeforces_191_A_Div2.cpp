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
    int arr[n],gain=0,ones=0,temp=0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if(arr[i] == 1)
        ++ones;

        if(arr[i] == 0)
        {
            ++gain;
            temp = max(gain,temp);
        }
        else
        {
            if(i == n-1 && arr[i] == 1)
            break;
            else
            --gain;
        }

        if(gain < 0)
        gain = 0;
    }
    if(temp == 0)
    cout<<n-1;
    else
    cout<<temp + ones;
    return 0;
}