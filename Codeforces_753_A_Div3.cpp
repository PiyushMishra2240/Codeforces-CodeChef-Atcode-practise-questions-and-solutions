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
        unordered_map<char,int> m;
        string s;
        int time=0;
        for (int i = 0; i < 26; i++)
        {
            char temp;
            cin>>temp;
            m.insert({temp,i+1});
        }
           cin>>s;
           for (int i = 0; i < s.size()-1; i++)
           {
               auto itr = m.find(s[i]);
               auto itr1 = m.find(s[i+1]);
               time+=abs(itr->second - itr1->second);
           }
           cout<<time<<'\n';
    }
    
    return 0;
}