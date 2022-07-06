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

    int n;
    cin>>n;
    while (n--)
    {
        string s;
        cin>>s;
        if(s.length() > 10)
        {
            cout<<s[0]<<s.length()-2<<s[s.length()-1]<<'\n';
        }
        else
        cout<<s<<'\n';
    }
    return 0;
}