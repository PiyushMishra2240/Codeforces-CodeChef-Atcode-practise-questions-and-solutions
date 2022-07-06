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
        string s;
        cin>>s;
        vector<ll> ones,zeros;
        for (ll i = 0; i < n; i++)
        {
            if(s[i] == '0')
            {
                zeros.push_back(i);
            }
            else if(s[i] == '1')
            {
                ones.push_back(i);
            }
        }
        sort(zeros.begin(),zeros.end());
        sort(ones.begin(),ones.end());
        ll cnt=0;
        ll i=0,j=0;
        while(i < zeros.size() && j < ones.size())
        {
            if((zeros[i] + ones[j])%2 == 1)
            {
                cnt++;
                i++;
                j++;
            }
            else
            {
                if(zeros.size() >= ones.size())
                i++;
                else
                j++;
            }
        }
        cout<<cnt<<'\n';
    }
    return 0;
}