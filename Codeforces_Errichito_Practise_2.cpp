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

    ll n;
    cin>>n;
    ll ans = n/11;
    string s;
    ll count=0;
    cin>>s;
    for (ll i = 0; i < s.size(); i++)
    {
        if(s[i] == '8')
        count++;
    }
    if(count < ans)
    cout<<count;
    else
    cout<<ans;
    return 0;
}