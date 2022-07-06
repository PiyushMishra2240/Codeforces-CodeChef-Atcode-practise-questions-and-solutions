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
    for (int i = s1.size()-1, j=0; i >= 0; i--,j++)
    {
        if(s1[i] != s2[j])
        {
            cout<<"NO";
            f=1;
            break;
        }
    }
    if(f==0)
    cout<<"YES";
    return 0;
}