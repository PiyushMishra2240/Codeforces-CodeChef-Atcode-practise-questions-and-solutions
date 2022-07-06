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

    int t;
    cin>>t;
    while (t--)
    {
        int n,count=0,f=0;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        if(is_sorted(arr,arr+n))
        {
            f=1;
            cout<<"0\n";
        }
        for (int i = 0; i < n-1; i++)
        {
            if(is_sorted(arr,arr+n))
            break;

            if(i%2 == 1)
            {
                for (int j = 1; j < n-1; j+=2)
                {
                    if(arr[j] > arr[j+1])
                    swap(arr[j],arr[j+1]);
                }
                ++count;
            }
            else
            {
                for (int j = 0; j <= n-1; j+=2)
                {
                    if(arr[j] > arr[j+1])
                    swap(arr[j],arr[j+1]);
                }
                ++count;
            }
        }
        if(f==0)
        cout<<count<<'\n';
    }
    return 0;
}