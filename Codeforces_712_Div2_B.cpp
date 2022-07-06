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
        string a,b;
        cin>>a>>b;
        ll prefix[n];
        ll sum;
        if(a[0] == '1')
        {
            prefix[0]=1;
            sum=1;
        }
        else
        {
            prefix[0]=-1;
            sum=-1;
        }
        for (ll i = 1; i < n; i++)
        {
            if(a[i] == '1')
            sum+=1;
            else
            sum+=-1;

            prefix[i]=sum;
        }
        ll f=0,g=-1;
        for (ll i = n-1; i >= 0; i--)
        {
            if(i%2==0)
            {
                if(a[i] != b[i] && g == -1)
                {
                    cout<<"NO\n";
                    f=1;
                    break;
                }
                else if(a[i] == b[i] && g == 1)
                {
                    cout<<"NO\n";
                    f=1;
                    break;
                }
            }
            else
            {
                if(a[i] != b[i] && g == -1)
                {
                    if(prefix[i] != 0)
                    {
                        cout<<"NO\n";
                        f=1;
                        break;
                    }
                    else
                    {
                        g*=-1;
                    }
                }
                else if(a[i] == b[i] && g == 1)
                {
                    if(prefix[i] != 0)
                    {
                        cout<<"NO\n";
                        f=1;
                        break;
                    }
                    else
                    {
                        g*=-1;
                    }
                }
            }
        }
        if(f==0)
        cout<<"YES\n";
    }
    return 0;
}