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
        string s;
        cin>>s;
        if(s[0] == 'a')cout<<25*(s[0]-'a')+(s[1]-'a')<<'\n';
        else if(s[1] > s[0] )cout<<25*(s[0]-'a')+(s[1]-'a')<<'\n';
        else cout<<25*(s[0]-'a')+(s[1]-'a'+1)<<'\n';
    }
    return 0;
}