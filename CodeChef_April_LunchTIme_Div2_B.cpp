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
        ll n,m,l;
        cin>>n>>m>>l;
        if(n == 0 || m == 0)
        {
            cout<<m<<'\n';
            continue;
        }
        if(m%(n+l-1) >= l)
        cout<<"0\n";
        else
        cout<<m%(n+l-1)<<'\n';
    }
    return 0;
}