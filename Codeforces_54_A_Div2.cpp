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
    int h=0,e=0,l=0,o=0;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'h')
        {
            h++;
        }
        if(h >= 1)
        {
            if(s[i] == 'e')
            e++;
        }
        if(h >= 1 && e >= 1)
        {
            if(s[i] == 'l')
            l++;
        }
        if(h >= 1 && e >= 1 && l >= 2)
        {
            if(s[i] == 'o')
            {
                o++;
                break;
            }
        }
    }
    //cout<<h<<" "<<e<<" "<<l<<" "<<o<<'\n';
    if(h >= 1 && e >= 1 && l >= 2 && o >= 1)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}