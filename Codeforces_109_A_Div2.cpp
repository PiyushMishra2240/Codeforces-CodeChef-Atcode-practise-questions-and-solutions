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

    int n,num=0;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int f1=0,f2=0,j;
        for (j = 0; j < i; j++)
        {
            if(temp > arr[j])
            ++f1;
            if(temp < arr[j])
            ++f2;
        }
        if(f1 == j || f2 == j)
        ++num;
    }
    cout<<num;
    return 0;
    
}