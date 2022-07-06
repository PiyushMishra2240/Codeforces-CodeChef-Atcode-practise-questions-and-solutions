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

    int n,sum=0,m=0;
    cin>>n;
    while (n--)
    {
        int t1,t2;
        cin>>t1>>t2;
        sum+=t2-t1;
        m = max(sum,m);
    }
    cout<<m;
    return 0;
}