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
    
    string s1,s2;
    cin>>s1>>s2;
    char c1[100],c2[100];
    for (int i = 0; i < s1.size(); i++)
    {
        c1[i] = s1[i];
    }
    
    for (int i = 0; i < s2.size(); i++)
    {
        c2[i] = s2[i];
    }
    
    int x = strcmpi(c1,c2);
    if(x == 0)
    cout<<"0";
    else if( x == 1)
    cout<<"1";
    else
    cout<<"-1";
    
    return 0;
}