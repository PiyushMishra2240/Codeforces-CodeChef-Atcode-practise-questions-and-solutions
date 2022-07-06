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
        ll a,b;
        ll even;
        cin>>a>>b;
        if(a == 1)
        even = (b-a)/3;
        else
        even = (b-a)/3 +1;
        ll odd = b-a + 1 - even;
        if(odd%2 == 1 && even%2 == 1)
        {
            cout<<"1\n";
        }
        else if(odd%2 == 1 && even%2 == 0 && a!=1)
        cout<<"1\n";
        else
        cout<<"0\n";
    }
    return 0;
}