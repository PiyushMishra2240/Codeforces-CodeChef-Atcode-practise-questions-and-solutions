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

    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        if(s.size()<5)
        cout<<s<<'\n';
        else
        {
            for(int i = 0;i<s.size();i++)
            {
                if(s[i] == 'p' && s[i+1] =='a' && s[i+2] =='r' && s[i+3] == 't' && s[i+4] =='y')
                {
                    s[i+2] = 'w';
                    s[i+3] = 'r';
                    s[i+4] = 'i';
                }
            }
            cout<<s<<'\n';
        }
        
    }
    return 0;
}