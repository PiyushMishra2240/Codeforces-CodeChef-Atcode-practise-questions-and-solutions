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

    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;

    for (int i = 0; i < t; i++)
    {
        for (int i = 0; i < s.size()-1; i++)
        {
            if(s[i] == 'B' && s[i+1] == 'G')
            {
                swap(s[i],s[i+1]);
                i++;
            }
        }
        
    }
    cout<<s;
    return 0;
}
