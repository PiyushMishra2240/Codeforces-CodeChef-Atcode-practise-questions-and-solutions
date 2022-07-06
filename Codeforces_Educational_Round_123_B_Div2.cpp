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
        if(n==3)
        {
            cout<<"3 1 2\n";
            cout<<"1 3 2\n";
            cout<<"3 2 1\n";
        }
        else
        {
            ll a[n];
            a[0]=1;
            a[1]=3;
            a[2]=2;
            for (ll i = 3; i < n; i++)
            {
                a[i]=i+1;
            }
            
            ll num=n;
            do
            {
                ll f=0;
                for (ll i = 0; i < n; i++)
                {
                    if(i+2<n)
                    {
                        if(a[i]+a[i+1] == a[i+2])
                        {
                            f=1;
                            break;
                        }
                    }
                    else
                    break;
                }
                if(f==0)
                {
                    for (ll i = 0; i < n; i++)
                    {
                        cout<<a[i]<<" ";
                    }
                    cout<<'\n';
                    num--;  
                }
                if(num<=0)
                break;
            } while (next_permutation(a,a+n));
            
        }
    }
    return 0;
}