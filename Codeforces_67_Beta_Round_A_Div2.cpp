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

    ll a,b,sum,a1=0,b1=0,c1=0,c2=0,c=0;
    cin>>a>>b;
    sum = a + b;
    while (a)
    {
        if(a%10 != 0)
        {
            a1 += (a%10)*pow(10,c1);
            c1++;
            a /= 10;
        }
        else
        a /= 10;
    }
    while(b)
    {
        if(b%10 != 0)
        {
            b1 += (b%10)*pow(10,c2);
            c2++;
            b /= 10;
        }
        else
        b /= 10;
    }
    c1=0;
    while (sum)
    {
        if(sum%10 != 0)
        {
            c += (sum%10) * pow(10,c1);
            c1++;
            sum /= 10;
        }
        else
        sum /= 10;
    }
    
    if(a1+b1 == c)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}