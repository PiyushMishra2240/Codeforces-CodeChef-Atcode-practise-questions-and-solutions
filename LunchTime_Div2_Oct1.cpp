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
        int n;
        cin>>n;
        cout<<"1 1 ";
        for (long long i = 1; i <= n-1; i++)
        {
            cout<<setprecision(20)<<pow(2ll,i)<<" ";
        }
        cout<<'\n';
    }
    return 0;
}