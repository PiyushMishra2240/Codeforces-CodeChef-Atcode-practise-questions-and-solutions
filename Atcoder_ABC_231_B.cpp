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

    int n;
    cin>>n;
    unordered_map<string,int> m;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin>>s;
        m[s]++;
    }
    string ans;
    int maximum = INT_MIN;
    for (auto itr = m.begin(); itr != m.end(); itr++)
    {
        if(itr->second > maximum)
        {
            maximum = itr->second;
            ans = itr->first;
        }
    }
    cout<<ans;
    return 0;
}