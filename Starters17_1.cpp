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
        int a,b,p,q;
        cin>>a>>b>>p>>q;
        if(a==p && b == q)
        cout<<"0\n";
        else if((a+b) % 2 == 0 && (p+q)%2==0)
        {
            cout<<"2\n";
        }
        else if((a+b)%2==1 && (p+q)%2==1)
        cout<<"2\n";
        else
        cout<<"1\n";
    }
    return 0;
}