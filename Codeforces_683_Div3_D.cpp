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
        if(n%2==1)
        {
            cout<<"1\n"<<n<<'\n';
        }
        else
        {
            ll twos=0;
            while (n%2==0)
            {
                twos++;
                n/=2;
            }
            ll times;
            if(twos%2==0)
            times=twos;
            else
            times=twos-1;
            cout<<times+1<<'\n';
            for (ll i = 0; i < times; i++)
            {
                cout<<"2 ";
            }
            if(times>0)
            cout<<n/pow(2,times)<<'\n';
            else
            cout<<n<<'\n';
        }
    }
    return 0;
}