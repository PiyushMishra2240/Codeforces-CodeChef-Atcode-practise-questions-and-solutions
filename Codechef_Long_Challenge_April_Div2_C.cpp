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
        cin>>a>>b;
        if(a == 1 || b == 1)
        {
            cout<<"-1\n";
            continue;
        }
        if(a%2 == 0 && b%2 == 0)
        cout<<"0\n";
        else if(a%3 == 0 && b%3 == 0)
        cout<<"0\n";
        else if(a%b == 0 || b%a == 0)
        cout<<"0\n";
        else if(__gcd(a,b)>1)
        cout<<"0\n";
        else
        cout<<"1\n";
    }
    return 0;
}