#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

struct a
{
    string s;
};

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
        ll n;
        cin>>n;
        string h;
        cin>>h;
        a c[n];
        for (ll i = 0; i < n; i++)
        {
            cin>>c[i].s;
        }
        ll j = 5,count=0;
        string k ="";
        for (ll i = 0; i < n; i++)
        {
            k += c[i].s[j];
            k += c[i].s[j+1];
            k += c[i].s[j+2];
           // cout<<k<<" ";
            if(k == h)
            ++count;
            k.clear();
        }
        if(count == ceil(1.0*n/2))
        cout<<"home\n";
        else
        cout<<"contest\n";
    }
    return 0;
}