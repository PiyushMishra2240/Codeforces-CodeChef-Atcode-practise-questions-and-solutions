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
        ll a1,k;
        cin>>a1>>k;
        ll f=0;
        ll ak=a1,sum;
        while (k>1 && f != 1)
        {
            ll mi=INT_MAX;
            ll mx=INT_MIN;
            ll at=ak;
            sum=at;
            while (at)
            {
                if(at%10 > mx)
                {
                    mx=at%10;
                }
                if(at%10 < mi)
                {
                    mi=at%10;
                }
                at/=10;
            }
            ak=sum+mi*mx;
            if(mi == 0 || mx == 0)
            {
                f=1;
                break;
            }
            k--;
        }
        cout<<ak<<'\n';
    }
    return 0;
}