#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    #ifndef ONLINE_JUDGE
         freopen("input.txt","r",stdin);
         freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin>>t;
    while (t--)
    {
        ll x1,x2,p1,p2,num1=0,num2=0;
        cin>>x1>>p1>>x2>>p2;
        if(p1 > p2)
        {
            if(x1 > x2)
            cout<<">\n";
            else if(x1 < x2)
            {
                
            }
        }
        else if(p1 < p2)
        cout<<"<\n";
        else if(p1 == p2)
        {
            if(x1 > x2)
            cout<<">\n";
            else if(x1 < x2)
            cout<<"<\n";
            else 
            cout<<"=\n";
        }
    }
    return 0;
}