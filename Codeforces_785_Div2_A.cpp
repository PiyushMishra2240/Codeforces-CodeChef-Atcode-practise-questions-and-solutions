#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        // cout<<'b'-'a'<<'\n';
        if(s.size() == 1)
        {
            cout<<"Bob "<<(s[0]-'a')+1<<'\n';
            continue;
        }
        if(s.size()%2==0)
        {
            ll sum=0;
            for (ll i = 0; i < s.size(); i++)
            {
                sum+=(s[i]-'a') + 1;
            }
            cout<<"Alice "<<sum<<'\n';
        }
        else if(s.size()%2 == 1)
        {
            if(s[0]>=s[s.size()-1])
            {
                ll sum=0;
                for (ll i = 0; i < s.size()-1; i++)
                {
                    sum+=(s[i]-'a') + 1;
                }
                cout<<"Alice "<<sum-((s[s.size()-1]-'a')+1)<<'\n';
            }
            else
            {
                ll sum=0;
                for (ll i = 1; i < s.size(); i++)
                {
                    sum+=(s[i]-'a')+1;
                }
                cout<<"Alice "<<sum-((s[0]-'a')+1)<<'\n';
            }
        }
    }
    return 0;
}