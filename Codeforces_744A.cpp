#include<bits/stdc++.h>
using namespace std;

int main()
{
     #ifndef ONLINE_JUDGE
         freopen("input.txt","r",stdin);
         freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while (t--)
    {
        string s;
        int ca=0,cb=0,cc=0;
        cin>>s;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] == 'A')
            ++ca;
            else if(s[i] == 'B')
            ++cb;
            else if(s[i] == 'C')
            ++cc;
        }
        if((ca + cc) == cb)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}       