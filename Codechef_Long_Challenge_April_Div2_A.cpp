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
        if(a%2 == 0 && a+2<=b)
        cout<<a<<" "<<a+2<<'\n';
        else if(a%3 == 0 && a+3<=b)
        cout<<a<<" "<<a+3<<'\n';
        else if(a+3<=b)
        cout<<a+1<<" "<<a+3<<'\n';
        else
        cout<<"-1\n";
    }
    return 0;
}