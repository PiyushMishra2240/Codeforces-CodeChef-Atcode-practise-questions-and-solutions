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

    int n,m,f=0;
    cin>>n>>m;
    int arr[m];
    unordered_map<int,int> m1;
    for (int i = 0; i < m; i++)
    {
        cin>>arr[i];
        m1[arr[i]]++;
    }
    sort(arr,arr+m);
    for (auto itr = m1.begin(); itr != m1.end(); itr++)
    {
        if(itr->second >= n)
        {
            cout<<"0";
            f=1;
            break;
        }
    }
    if(f==0)
    {
        int less = arr[n-1] - arr[0];
        for (int i = 0; i < m; i++)
        {
            if(i+n-1 < m)
            {
                if(arr[i+n-1] - arr[i] < less)
                    less = arr[i+n-1] - arr[i];
            }
            else
            break;
        }
        cout<<less;
    }
    return 0;
}