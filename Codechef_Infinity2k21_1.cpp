#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isVowel(char ch) 
{
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    return true;
    else 
    return false;
}

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
        string s,p;
        cin>>s>>p;
        ll count=INT_MAX;
        for(char c = 'a' ;c <= 'z' ; c++)
        {   
            ll ans=0;
            for (ll i = 0; i < n; i++)
            {
                if(s[i] == '?')
                {
                    s[i] = c;
                }
                if(p[i] == '?')
                {
                    p[i] = c;
                }
            }
            for (ll i = 0; i < n; i++)
            {
                if((isVowel(s[i]) && isVowel(p[i])) && s[i] != p[i])
                ans+=2;
                else if(isVowel(s[i]) && (!isVowel(p[i])))
                ans++;
                else if((!isVowel(s[i])) && isVowel(p[i]))
                ans++;
                else if(((!isVowel(s[i])) && (!isVowel(p[i]))) && s[i] != p[i])
                ans+=2;
            }
            count = min(ans,count);
        }
        cout<<count<<"\n";
    }  
    return 0;
}