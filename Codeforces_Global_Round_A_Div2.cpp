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
        ll m,n;
        cin>>m>>n;
        if(m == 1 && n == 1)
        cout<<"0\n";
        else if( m == 1 || n == 1)
        cout<<"1\n";
        else 
        cout<<"2\n";
    }
    
    return 0;
}