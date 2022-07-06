#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
         freopen("input.txt","r",stdin);
         freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while (t--)
    {
        string s1;
        cin>>s1;
        unordered_map<char,int> m;
        for (int i = 0; i < s1.size(); i++)
        {
            m[s1[i]]++;
        }
        int dis=0,repeat=0;
        for (auto itr = m.begin(); itr != m.end(); itr++)
        {
            if(itr->second > 1)
            repeat++;
            else
            ++dis;
        }
        cout<<repeat + dis/2;
        cout<<'\n';
    }
    return 0;
}