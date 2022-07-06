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
        if(s1[i] == '.')
        s2.push_back('0');
        else if(s1[i] == '-' && s1[i+1] == '.')
        {
            s2.push_back('1');
            i++;
        }
        else if(s1[i] == '-' && s1[i+1] == '-')
        {
            s2.push_back('2');
            i++;
        }
    }

    cout<<s2;
    return 0;
}