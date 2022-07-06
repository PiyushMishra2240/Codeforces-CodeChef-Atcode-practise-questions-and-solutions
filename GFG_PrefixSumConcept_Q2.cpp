#include<bits/stdc++.h>
using namespace std;

bool sumZero(int size,int a[])
{
    int sum = 0;
    unordered_set<int> s;
    for (int i = 0; i < size; i++)
    {
        sum += a[i];
        if(sum == 0 || s.find(sum) != s.end())
        return true;
        s.insert(sum);
    }
    return false;
}

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
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<sumZero(n,arr);
    return 0;
}