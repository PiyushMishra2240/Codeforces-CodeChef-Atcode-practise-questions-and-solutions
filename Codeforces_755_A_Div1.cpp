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
        int n,c=0;
        cin>>n;
        int a[n],b[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        for (int i = 0; i < n; i++)
        {
            if(a[i] - b[i] == -1 || (a[i] - b[i] == 0))
            continue;
            else
            {
                c=1;
                cout<<"NO\n";
                break;
            }
        }
        if(c==0)
        cout<<"YES\n";
    }
    return 0;
}