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

    ll l,r;
    string s;
    cin>>l>>r;
    cin>>s;
    while (l<r)
    {
        swap(s[l-1],s[r-1]);
        l++;
        r--;
    }
    cout<<s;
    return 0;
}