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
        string s1,s2;
        cin>>s1>>s2;
        set<char> a1,b1,ans;
        for (ll i = 0; i < s1.size(); i++)
        {
            a1.insert(s1[i]);
        }
        for (ll i = 0; i < s2.length(); i++)
        {
            b1.insert(s2[i]);
        }

        for (auto itr = b1.begin(); itr != b1.end(); itr++)
        {
            if(a1.find(*itr) == a1.end())
            ans.insert(*itr);   
        }

        if(ans.size() != 0)
        {
            for (auto it = ans.begin(); it != ans.end(); it++)
            {
                cout<<*it;
            }
            cout<<'\n';
        }
        else
        cout<<"-1\n";
    }
    return 0;
}