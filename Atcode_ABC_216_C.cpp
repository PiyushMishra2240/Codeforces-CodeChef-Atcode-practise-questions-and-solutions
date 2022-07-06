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
    ll t=n;
    ll count=1;
    string s;
    if(n%2 == 0)
    {
        while(n%2 != 1)
        {
            n = n/2;
        }
        cout<<n<<" ";
        for (ll i = 0; i < n; i++)
        {
            s.push_back('A');
        }
        count=n;
        while (count != t)
        {
            s.push_back('B');
            count*=2;
            if(count == t)
            break;
        }
        cout<<s;
    }
    else
    {
        n = n-1;
        while(n%2 != 1 && n>0)
        {
            n = n/2;
        }
        for (ll i = 0; i < n; i++)
        {
            s.push_back('A');
        }
        count=n;
        while (count != t-1)
        {
            s.push_back('B');
            count*=2;
            if(count == t-1)
            break;
        }
        s.push_back('A');
        cout<<s;
    }
    return 0;
}