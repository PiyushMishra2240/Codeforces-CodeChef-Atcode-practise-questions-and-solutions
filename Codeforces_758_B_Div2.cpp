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
        ll n,a,b;
        cin>>n>>a>>b;
        if(a+b+2>n || abs(a-b)>1)
        {
            cout<<"-1\n";
            continue;
        }        
        if(a==b)
        {
            ll i=1,j=n;
            for (ll k = 0; k < a; k++)
            {
                cout<<i<<" "<<j<<" ";
                i++;
                j--;
            }
            while (i<=j)
            {
                cout<<i<<" ";
                i++;
            }
            cout<<'\n';
        }
        else if(a>b)
        {
            ll i=1,j=n;
            for (ll k = 0; k < a; k++)
            {
                cout<<i<<" "<<j<<" ";
                i++;
                j--;
            }
            while (j>=i)
            {
                cout<<j<<" ";
                j--;
            }
            cout<<'\n';
        }
        else
        {
            ll i=1,j=n;
            for (ll k = 0; k < b; k++)
            {
                cout<<j<<" "<<i<<" ";
                i++;
                j--;
            }
            while (i<=j)
            {
                cout<<i<<" ";
                i++;
            }
            cout<<'\n';
        }
    }
    return 0;   
}