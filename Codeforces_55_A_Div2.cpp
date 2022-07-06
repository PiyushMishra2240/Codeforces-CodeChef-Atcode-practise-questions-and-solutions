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

    int u=0,l=0;
    string s;
    cin>>s;
    for (int i = 0; i < s.size(); i++)
    {
        if(isupper(s[i]))
        ++u;
        else
        ++l;
    }
    if(u>l)
    {
        for (int i = 0; i < s.size(); i++)
        {
            s[i] = toupper(s[i]);
        }
        
    }
    else if(u == l)
    {
        for (int i = 0; i < s.size(); i++)
        {
            s[i]=tolower(s[i]);
        }
        
    }
    else
    {
        
        for (int i = 0; i < s.size(); i++)
        {
            s[i]=tolower(s[i]);
        }
    }
    cout<<s;
    return 0;
    
}