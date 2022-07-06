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
        ll hc,dc,hm,dm,k,w,a,f=0;
        cin>>hc>>dc>>hm>>dm>>k>>w>>a;
        if(ceil(1.0*hc/dm) >= ceil(1.0*hm/dc))
        cout<<"YES\n";
        else
        {
            for (ll i = 0; i <= k; i++)
            {
                if(ceil(1.0*(hc+i*a)/dm) >= ceil(1.0*hm/(dc+(k-i)*w)))
                {
                    cout<<"YES\n";
                    f=1;
                    break;
                }
            }
            if(f==0)
            cout<<"NO\n";
        }
    }
    return 0;
}
