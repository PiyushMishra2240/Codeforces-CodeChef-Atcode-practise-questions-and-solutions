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
        int n,m;
        cin>>n>>m;
        for (int i = 0; i < n; i++)
        {
            if(i%3 == 0)
            cout<<"a";
            else if(i%3 == 1)
            cout<<"b";
            else if(i%3 == 2)
            cout<<"c";

        }
        cout<<"\n";
    }
 return 0;   
}