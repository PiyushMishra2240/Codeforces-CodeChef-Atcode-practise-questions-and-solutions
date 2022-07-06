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
        ll n;
        cin>>n;
        if(n%4 == 0)cout<<n+3<<'\n';
        else if(n%4==1)cout<<n<<'\n';
        else if(n%4==2)cout<<"3"<<'\n';
        else if(n%4==3)cout<<"3"<<'\n';
    }
    return 0;
}