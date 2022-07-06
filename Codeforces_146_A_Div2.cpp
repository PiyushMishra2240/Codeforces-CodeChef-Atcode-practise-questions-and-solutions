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
    
    string s;
    cin>>s;
    unordered_map<char,int> m;
    for (int i = 0; i < s.size(); i++)
    {
        m[s[i]]++;
    }
    if(m.size()%2 != 0)
    {
        cout<<"IGNORE HIM!";
    }
    else
    cout<<"CHAT WITH HER!";
    return 0;
}