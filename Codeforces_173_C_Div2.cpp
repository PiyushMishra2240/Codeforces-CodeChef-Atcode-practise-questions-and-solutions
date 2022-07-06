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
    if(s1.length() != s2.length())
    cout<<"NO";
    else 
    {
        int count1s1=0,count1s2=0;
        for (int i = 0; i < s1.size(); i++)
        {
            if(s1[i] == '1')
            ++count1s1;
            if(s2[i] == '1')
            ++count1s2;
        }
        if(count1s1 == 0 && count1s2 != 0)
        cout<<"NO";
        else if(count1s1 != 0 && count1s2 == 0)
        cout<<"NO";
        else
        cout<<"YES";
    }
    return 0;
}