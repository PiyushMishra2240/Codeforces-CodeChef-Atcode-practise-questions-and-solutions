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
    ll n;
    cin>>n;
    if(n == 1)
    cout<<"a";
    else if(n == 2)
    cout<<"aa";
    else if(n == 3)
    cout<<"aab";
    else
    {
        ll j = 0,k=0;
        for (ll i = 0; i < n; i++)
        {
            if(j<2)
            {
                cout<<"a";
                j++;
            }
            else if(j >=2 && k < 2)
            {
                cout<<"b";
                k++;
            }
            if(j == 2 && k == 2)
            {
                j = 0;
                k = 0;
            }
        }
        
    }
    return 0;
}