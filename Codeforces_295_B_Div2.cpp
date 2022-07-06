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

    ll n,m,ans=0;
    cin>>n>>m;
    if(m<n)
    {
        ans += n-m;
        cout<<ans<<'\n';
    }
    else
    {
        while (m > n)
        {
            if(m%2 == 0)
            {
                ++ans;
                m /=2;
            }
            else
            {
                m++;
                ++ans;
            }

        }
        ans += n-m;
        cout<<ans<<'\n';
    }
    return 0;
}