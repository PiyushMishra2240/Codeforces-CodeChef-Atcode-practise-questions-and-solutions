#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;
        temp = temp % 2;
        arr[i] = temp;
        sum += temp;
    }
    if(sum + 1 == n)
    {
        int p = 1;
        for (int i = 0; i < n; i++)
        {
            p *= arr[i];
            if(p == 0)
            {
                cout<<i + 1 <<"\n";
                break;
            }
        }
        
    }
    else
    {
        int p = 0;
        for(int i = 0 ; i < n ; i++)
        {
            p += arr[i];
            if(p == 1)
            {
                cout<<i + 1<<"\n";
                break;
            }
        }
    }
    
    return 0;
    
}