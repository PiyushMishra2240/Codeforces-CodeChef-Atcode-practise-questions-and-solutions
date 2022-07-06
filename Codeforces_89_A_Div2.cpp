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
    cin>>s1;
    for (int i = 0; i < s1.size(); i++)
    {
        s1[i] = tolower(s1[i]);
    }
    for (int i = 0; i < s1.size(); i++)
    {
        if(s1[i] != 'a' && s1[i] != 'e' && s1[i] != 'i' && s1[i] != 'o' && s1[i] != 'u' && s1[i] != 'y')
        {
            s2.push_back('.');
            s2.push_back(s1[i]);
        }
    }
    cout<<s2;
    return 0;
}