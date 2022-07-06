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

    ll a,b;
    cin>>a>>b;
    if(b<a)
    cout<<"0\n";
    else
    cout<<b-a+1;
    return 0;
}