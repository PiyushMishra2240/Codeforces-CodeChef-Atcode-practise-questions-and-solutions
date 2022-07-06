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
    long double n;
    cin>>n;
    long double temp,sum=0;
    for (int i = 0; i < n; i++)
    {
        cin>>temp;
        sum+=temp;
    }
    cout<<setprecision(14)<<(sum/(100*n))*100;
    return 0;
}