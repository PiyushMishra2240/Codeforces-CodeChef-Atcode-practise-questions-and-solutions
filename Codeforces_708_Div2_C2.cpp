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
        ll n,k;
        cin>>n>>k;
        for (ll i = 0; i < k-3; i++)
        {
            cout<<"1 ";
        }
        ll rem=n-k+3;
        if(rem>0)
        {
            if(rem%2==0)
            {
                if(rem%4 == 0)
                {
                    cout<<rem/4<<" "<<rem/4<<" "<<rem/2<<'\n';
                }
                else
                {
                    cout<<rem/2-1<<" "<<rem/2-1<<" "<<"2\n";
                }
            }
            else
            {
                cout<<rem/2<<" "<<rem/2<<" "<<"1\n";
            }
        }
        else
        cout<<'\n';
    }
    return 0;
}