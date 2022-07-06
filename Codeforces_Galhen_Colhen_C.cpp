#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    #ifndef ONLINE_JUDGE
         freopen("input.txt","r",stdin);
         freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s; // 0->vertical tile , 1 -> horizontal tile
    cin>>s;
    ll ch=0,cv=0;
    for (ll i = 0; i < s.size(); i++)
    {
        if(s[i] == '1')
        {
            if(ch == 0)
            {
                cout<<"1 1\n";
                ++ch;
            }
            else if(ch == 1)
            {
                cout<<"1 3\n";
                ++ch;
            }
            if(ch == 2)
            ch = 0;
        }
        else if(s[i] == '0')
        {
            if(cv == 0)
            {
                cout<<"2 1\n";
                ++cv;
            }
            else if(cv == 1)
            {
                cout<<"2 2\n";
                ++cv;
            }
            else if(cv == 2)
            {
                cout<<"2 3\n";
                ++cv;
            }
            else if(cv == 3)
            {
                cout<<"2 4\n";
                ++cv;
            }
            if(cv == 4)
            cv = 0;
        }    
    }
    return 0;
}