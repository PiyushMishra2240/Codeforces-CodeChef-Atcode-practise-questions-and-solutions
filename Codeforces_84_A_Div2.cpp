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

    ll n,count_lucky=0;
    cin>>n;
    while (n)
    {
        if(n%10 == 7 || n%10 == 4)
        ++count_lucky;
        n /= 10;
    }
    if(count_lucky == 4 || count_lucky == 7)
    cout<<"YES\n";
    else
    cout<<"NO\n";
    return 0;
}