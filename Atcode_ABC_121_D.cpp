#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll a, b;
    cin>>a>>b;
    ll count, x=1;
    ll x1=0, x2=0;
    while(x<=a)
    {
        count=0;
        count+=((a+1)/(x*2))*x;
        
        if(((a+1)%(x*2))>x)
            count+=((a+1)%(x*2))-x;
            
        if(count%2==1)
            x1+=x;
            
        x=x*2;
    }
    x=1;
    while(x<=b)
    {
        count=0;
        count+=((b+1)/(x*2))*x;
        
        if(((b+1)%(x*2))>x)
            count+=((b+1)%(x*2))-x;
            
        if(count%2==1)
            x2+=x;
            
        x=x*2;
    }
    ll res=x1^x2^a;
    cout<<res<<"\n";
    return 0;
}