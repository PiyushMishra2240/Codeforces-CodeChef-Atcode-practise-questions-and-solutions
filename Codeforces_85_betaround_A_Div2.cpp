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
    int f=0;
    cin>>s1>>s2;

    for (int i = 0; i < s1.size(); i++)
    {
        if(islower(s1[i]))
        s1[i] = toupper(s1[i]);

        if(islower(s2[i]))
        s2[i] = toupper(s2[i]);
    }
    
    for (int i = 0; i < s1.size(); i++)
    {
        if(s1[i] - s2[i] > 0)
        {
            cout<<"1";
            f=1;
            break;
        }
        else if(s1[i] - s2[i] < 0)
        {
            cout<<"-1";
            f=1;
            break;
        }
    }
    if(f==0)
    cout<<"0";
    return 0;
}