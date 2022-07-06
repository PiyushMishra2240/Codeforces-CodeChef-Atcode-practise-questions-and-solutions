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

    int n,a,b;
    cin>>n>>a>>b;
    if(a == 0)
    {
        if(b == n-1)
        cout<<"1";
        else
        cout<<b+1;
    }
    else if(b == 0)
    {
        cout<<"1";
    }
    else
    {
        if(n-a-b <=0 || n-a-b == 1)
        {
            cout<<n-a;
        }
        else if(n-a > b)
        {
            cout<<b+1;
        }
        else 
        {
            cout<<n-a;
        }
    }

    return 0;
}