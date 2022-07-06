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
        string s;
        cin>>s;
        ll p=0;
        for (ll i = 0; i < s.size()/2; i++)
        {
            if(s[i] != s[s.size()-i-1])
            {
                p=1;
                break;
            }
        }
        if(p==0)cout<<"YES\n";
        else
        {
            ll i=0,j=-1;
            for(;i<s.size()/2;i++)
            {
                if(s[i] != s[s.size()-i-1])
                {
                    if(s[i] == s[s.size()-i-2])j=s.size()-i-2;
                    else  if(s[i+1] == s[s.size()-i-1]) j=s.size()-i-1;
                    break;
                }
            }
            if(j == -1)cout<<"NO\n";
            else if(s[i+1] == s[j])
            {
                ll ii=i+1;
                while(s[ii] == s[j] && ii <= j)
                {
                    ii++;
                    j--;
                }
                if(ii>j)cout<<"YES\n";
                else cout<<"NO\n";
            }
            else if(s[i] == s[j])
            {
                ll ii=i;
                while (s[ii] == s[j] && ii<=j)
                {
                    ii++;
                    j--;
                }
                if(ii>j)cout<<"YES\n";
                else cout<<"NO\n";
            }
        }
    }
    return 0;
}