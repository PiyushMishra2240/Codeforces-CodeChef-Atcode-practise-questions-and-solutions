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
        int w1,w2,x1,x2,m;
        cin>>w1>>w2>>x1>>x2>>m; 
        if((m*x1 + w1) <= w2 && w2 <= (m*x2 +w1))
        cout<<"1\n";
        else
        cout<<"0\n";
    }
    return 0;
}