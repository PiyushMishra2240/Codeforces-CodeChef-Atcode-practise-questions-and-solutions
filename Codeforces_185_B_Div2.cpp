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

    long double a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a/(b+1) <= c/(d+1))
    {
        int i = 2;
        while (a*i/(b+1) < c/(d+1))
        {
            i++;
        }
        cout<<a*i/(b+1);
    }
    else
    cout<<a/(b+1);
    return 0;
}