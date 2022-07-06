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
        if(b == 1)
        cout<<"NO\n";
        else
        {
            cout<<"YES\n"<<a<<" "<<a*b<<" "<<a*(b+1)<<"\n";
        }
    }
    return 0;   
}