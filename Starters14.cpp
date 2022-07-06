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
        vector<ll> v;
        ll c = k;
        c++;
        if(k == n-1)
        {
            cout<<"-1\n";
            continue;
        }
        
        ll i;
        for ( i = 1; i < n; i++)
        {
            if(k == 0)
            break;
            cout<<i<<" ";
            k--;
        }
        
        for (ll j = n; j >= i; j--)
        {
            if(j == c)
            {
                v.push_back(j);
                continue;
            }
            cout<<j<<" ";
            c++;
        }
        for(auto val : v)
        {
            cout<<val<<" ";
            cout<<"\n";
        }
        
        cout<<"\n";
    }
    
    return 0;
}