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
        ll n;
        cin>>n;
        if(n%2 == 1)
        {
            if(n == 1 || n == 3)cout<<"-1\n";
            else
            {
                vector<ll> a(5);
                for (ll i = 0; i < 5; i++)
                {
                    a[i]=i+1;
                }
                do
                {
                    ll x=0;
                    for (ll i = 0; i < 5; i++)
                    {
                        x^=abs(a[i]-(i+1));
                    }
                    ll f=0;
                    for (ll i = 0; i < 5; i++)
                    {
                        if(a[i]==i+1)
                        {
                            f=1;
                            break;
                        }
                    }
                    if(x==0 && f==0)break;
                }while (next_permutation(a.begin(),a.end()));
                for (ll i = 0; i < 5; i++)
                {
                    cout<<a[i]<<" ";
                }
                ll i=n;
                ll tt=n-5;
                while(tt--)
                cout<<i--<<" ";
                cout<<'\n';
            }
        }
        else
        {
            for(ll i=n;i>=1;i--)
            cout<<i<<" ";
            cout<<'\n';
        }
    }
    return 0;
}