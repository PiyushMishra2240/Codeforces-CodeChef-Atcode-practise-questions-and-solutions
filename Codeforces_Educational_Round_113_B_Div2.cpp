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
        ll n,ones=0,twos=0;
        cin>>n;
        string s;
        cin>>s;
        for (ll i = 0; i < n; i++)
        {
            if(s[i] == '1')
            ones++;
            else
            twos++;
        }
        if(twos == 1 && ones == 1)
        cout<<"NO\n";
        else if(twos == 2)
        cout<<"NO\n";
        else
        {
            cout<<"YES\n";
            vector<ll> id;
            for (ll i = 0; i < n; ++i)
            if (s[i] == '2')
            id.push_back(i);
            
            ll k=id.size();
            vector<string> t(n, string(n, '='));
            for (ll i = 0; i < n; ++i) 
            t[i][i] = 'X';
            for (ll i = 0; i < k; ++i) 
            {
                int x = id[i], y = id[(i + 1) % k];
                t[x][y] = '+';
                t[y][x] = '-';
            }
            for (ll i = 0; i < n; ++i) cout << t[i] << '\n';
        }
    }
    return 0;
}