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

    string s1,s2,s3;
    cin>>s1>>s2;
    for (int i = 0; i < s1.size(); i++)
    {
        if(s1[i] == '1' && s2[i] == '1')
        s3.push_back('0');
        else if(s1[i] == '1' && s2[i] =='0')
        s3.push_back('1');
        else if(s1[i] == '0' && s2[i] == '1')
        s3.push_back('1');
        else if(s1[i] == '0' && s2[i] == '0')
        s3.push_back('0');
    }
    cout<<s3;
    return 0;
}