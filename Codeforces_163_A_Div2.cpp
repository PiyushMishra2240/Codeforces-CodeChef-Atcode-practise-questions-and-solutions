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
    string s;
    cin>>s;
    stack<char> st;
    st.push(s[0]);
    for (int i = 1; i < s.size(); i++)
    {
        if(st.top() != s[i])
        st.push(s[i]);        
    }
    cout<<s.size()-st.size();
    return 0;
}