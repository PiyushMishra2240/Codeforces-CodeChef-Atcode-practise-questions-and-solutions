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
    if(find(s.begin(),s.end(),'H') != s.end())
    {
        cout<<"YES";
    }
    else if(find(s.begin(),s.end(),'Q') != s.end())
    {
        cout<<"YES";
    }
    else if(find(s.begin(),s.end(),'9') != s.end())
    {
        cout<<"YES";
    }
    else
    cout<<"NO";
    return 0;
}