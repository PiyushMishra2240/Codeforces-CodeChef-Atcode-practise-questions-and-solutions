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
        ll n,k;
        cin>>n>>k;
        if(n%4 == 0)
        {
            if(k == 1)cout<<"On\n";
            else if(k == 0) cout<<"Off\n";
            else cout<<"Ambiguous\n";
        }
        else if(n%4 != 0 && k == 0) cout<<"On\n";
        else cout<<"Ambiguous\n";
    }
    return 0;
}