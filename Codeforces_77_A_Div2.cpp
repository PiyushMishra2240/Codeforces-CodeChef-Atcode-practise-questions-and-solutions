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
    int f=0;
    if(s.size() < 7)
    {
        cout<<"NO";
        f=1;
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] == '1')
            {
                if(i+6 < s.size())
                {
                    if(s[i+1] == '1' && s[i+2] == '1' && s[i+3] =='1' && s[i+4] == '1' && s[i+5] =='1' && s[i+6] == '1')
                    {
                        cout<<"YES";
                        f=1;
                        break;
                    }
                }
            }
            else
            {
                if(i+6 < s.size())
                {
                    if(s[i+1] == '0' && s[i+2] == '0' && s[i+3] =='0' && s[i+4] == '0' && s[i+5] =='0' && s[i+6] == '0')
                    {
                        cout<<"YES";
                        f=1;
                        break;
                    }
                }
            }
        }
    }
    if(f==0)
        cout<<"NO";
    return 0;
}