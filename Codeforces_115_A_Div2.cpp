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

    int t;
    cin>>t;
    while (t--)
    {
        int n,f=0;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
       // cout<<s1<<"  "<<s2<<'\n';
        if(s2[2] == 1)
        cout<<"NO\n";
        else
        {
            for (int i = 0; i < n; i++)
            {
                if(s1[i] == '1' && s2[i] == '1')
                {
                    cout<<"NO\n";
                    f = 1;
                    break;
                }
            }
            if(f == 0)
            cout<<"YES\n";
        }
    }
    return 0;
}