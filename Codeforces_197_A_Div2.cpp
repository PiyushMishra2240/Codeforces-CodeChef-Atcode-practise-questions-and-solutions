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

    string s,ans;
    cin>>s;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == '1' || s[i] == '2' || s[i] == '3')
        ans.push_back(s[i]);
    }
    sort(ans.begin(),ans.end());
    s.clear();
    for (int i = 0; i < ans.size(); i++)
    {
        s.push_back(ans[i]);
        if(i < ans.size()-1)
        s.push_back('+');
    }
    cout<<s;
    return 0;
}