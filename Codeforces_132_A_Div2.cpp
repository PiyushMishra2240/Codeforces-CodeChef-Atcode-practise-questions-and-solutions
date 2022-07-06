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
    long double a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int m;
    cin>>m;
    long double b[m];
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
    }

    int maximum=0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(ceil(b[j]/a[i]) == floor(b[j]/a[i]))
            {
               if(b[j]/a[i] > maximum)
               maximum = b[j]/a[i]; 
            }
        }
        
    }

    int count=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(ceil(b[j]/a[i]) == floor(b[j]/a[i]))
            {
               if(b[j]/a[i] == maximum)
               ++count;
            }
        }
        
    }
        cout<<count;
        return 0;
}