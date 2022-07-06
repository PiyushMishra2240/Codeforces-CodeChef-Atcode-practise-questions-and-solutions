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
    if(s[0] != '1')
    cout<<"NO";
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] != '1' && s[i] != '4')
            {
                cout<<"NO";
                f=1;
                break;
            }
            if(s[i] == '4' && s[i+1] == '4' && s[i+2] == '4')
            {
                cout<<"NO";
                f=1;
                break;
            }
        }
        if(f==0)
        cout<<"YES";
    }
    return 0;
}