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

    int t;
    cin>>t;
    while (t--)
    {
        ll x,n;
        cin>>x>>n;
        if(x%2==0)
        {
            if(n%4==0)
            cout<<x<<'\n';
            else if(n%4==1)
            cout<<n - (x-n)<<'\n';
            else if(n%4==2)
            cout<<x+1<<'\n';
            else
            cout<<x+n<<'\n';
        }
        else
        {
            
        }
    }
    return 0;
}