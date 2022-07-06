#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s, st="";
        cin>>s;
        vector<int> v(26);
        int n=s.size();
        for(int i=0; i<n; i++)
        {
            if(v[s[i]-'a']==0)
            {
                st.push_back(s[i]);
                v[s[i]-'a']++;
            }
        }
        cout<<st<<"\n";
    }
    return 0;
}