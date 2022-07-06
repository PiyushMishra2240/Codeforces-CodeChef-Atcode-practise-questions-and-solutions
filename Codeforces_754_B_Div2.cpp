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
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(is_sorted(s.begin(),s.end()))
        {
            cout<<"0\n";
            continue;
        }
        string x = s;
        sort(x.begin(),x.end());
        vector<int> v;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] != x[i])
            v.push_back(i+1);
        }
        cout<<"1\n";
        cout<<v.size()<<" ";
        for (int i = 0; i < v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}