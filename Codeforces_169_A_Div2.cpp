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

    ll n,k;
    cin>>n>>k;
    ll f,t,m;
    cin>>f>>t;
    if(t > k)
    m = f - (t-k);
    else
    m = f;
    n--;
    while (n--)
    {
        cin>>f>>t;
        if(t > k)
        m = max(f - (t-k),m);
        else
        m = max(f,m);
    }
    cout<<m;
    return 0;
}