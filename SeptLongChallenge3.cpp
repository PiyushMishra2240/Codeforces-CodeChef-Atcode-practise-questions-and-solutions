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

    ll T , N , esh = 0 , osh = 0 , sum = 0;
    cin>>T;
    while (T--)
    {
        esh = 0;
        osh = 0;
        sum = 0;
        cin>>N;
        ll a[N];
        for (ll i = 0; i < N; i++)
        {
            cin>>a[i];
        }
        for (ll i = 0; i < N; i++)
        {
            if( (i+1) % 2 == 1)
            {
                if(a[i] % 2 == 0)
                ++sum;
                else
                osh++;
            }
            if( (i+1) % 2 == 0)
            {
                if(a[i] % 2 == 1)
                sum++;
                else
                esh++;
            }
            if(osh == esh && osh != 0 && esh != 0)
            {
                sum += 2;
                osh--;
                esh--;
            }
            if(osh > esh)
            {
                if(esh > 0)
                while(esh--)
                {
                    sum += 2;
                    osh--;
                }
            }
            if(esh > osh)
            {
                if(osh > 0)
                while(osh--)
                {
                    sum += 2;
                    esh--;
                }
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
    
}