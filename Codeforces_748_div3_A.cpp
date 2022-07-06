#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
        ll a,b,c,greatest;
        cin>>a>>b>>c;
        greatest = a;

        if(b >= greatest)
        greatest = b;
        if(c >= greatest)
        greatest = c;

        if(greatest == 0)
        {
            cout<<"1 1 1\n";
            continue;
        }

        if(a == b && a == greatest)
        cout<<"1 1 "<<greatest - c + 1<<'\n';
        else if( a==c && a == greatest)
        cout<<"1 "<<greatest - b + 1<<" 1\n";
        else if(b==c && b == greatest)
        cout<<greatest - a + 1<<" 1 1\n";
    else
    {
        if(greatest - a)
        cout<<greatest - a + 1<<" ";
        else
        cout<<"0 ";
        if(greatest - b)
        cout<<greatest - b + 1<<" ";
        else
        cout<<"0 ";
        if(greatest - c)
        cout<<greatest - c + 1<<"\n";
        else
        cout<<"0\n";
    }
    }
    return 0;

}