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

    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        ll op=0;
        for (int i = 0; i < n; i++)
        {
            if(arr[i] > (i+1+op))
            {
                op += arr[i] - (i+1+op);
            }
        }
        cout<<op<<'\n';
    }
    
    return 0;
}