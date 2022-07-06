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
        ll count = 0 , flagwand = 0;
        string s;
        cin>>s;
        for (ll i = 0; i < s.size(); i++)
        {
            if(s[i] == '0')
            {
                if(count % 2 == 0)
                {
                    ++count;
                }
                else
                {
                    continue;
                }
            }
            else if(s[i] == '1')
            {
                if(count % 2 == 0)
                {
                    continue;
                }
                else
                {
                    ++count;
                }
            }
        }
        cout<<count<<"\n";
        
    }
    return 0;
    
}