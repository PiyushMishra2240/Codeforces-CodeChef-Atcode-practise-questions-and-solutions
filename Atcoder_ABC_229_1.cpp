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

    string s1,s2;
    ll f = 0,g=0;
    cin>>s1>>s2;
    for (unsigned i = 0; i < s1.size(); i++)
    {
        if(s1[i] == '#' && s2[i] == '#' )
        {
            f = 1;
            break;
        }
    }
    for (unsigned i = 0; i < s1.size()-1; i++)
    {
        if((s1[i] == '#' && s1[i+1] == '#') || (s2[i] == '#' && s2[i+1] == '#') )
            g=1;
    }
    
    if(f == 1 || g == 1)
    cout<<"Yes";
    else
    cout<<"No";
    return 0;
}