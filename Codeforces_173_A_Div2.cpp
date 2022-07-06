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

    int n,ans = 0;
    cin>>n;
    while (n--)
    {
        string s;
        cin>>s;
        if(find(s.begin(),s.end(),'+') != s.end())
        ++ans;
        else
        --ans;
    }
    cout<<ans;
    return 0;
}