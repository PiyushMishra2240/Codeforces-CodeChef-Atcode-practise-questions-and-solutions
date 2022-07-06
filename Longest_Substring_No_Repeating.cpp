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

    string s;
    cin>>s;
    //cout<<s<<'\n';
    unordered_map<char,ll> m;
    ll ans = INT_MIN,i=0,n=s.length(),j=0;
    while(j < n)
    {
        m[s[j]]++;
        if(m.size() == j-i+1)
        {
            ll x = m.size();
            ans = max(ans,x);
            j++;
        }
        else if(m.size() < j-i+1)
        {
            while(m.size() < j-i+1)
            {
                m[s[i]]--;
                if(m[s[i]] == 0)
                {
                    m.erase(s[i]);
                }
                i++;
            }
            j++;
        }
    }
    cout<<ans;
    return 0;

}