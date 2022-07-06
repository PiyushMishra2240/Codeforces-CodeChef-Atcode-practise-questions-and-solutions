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
        int n,sm=0,st=0,sw=0,str=0,sf=0;
        cin>>n;
        int groups = n/2;
        vector<int> v(5*n);
        for (int i = 0; i < 5*n; i++)
        {
            cin>>v[i];
        }
        for (int i = 0; i < n; i++)
        {
           sm += v[5*i];
           st += v[5*i + 1];
           sw += v[5*i + 2];
           str += v[5*i + 3];
           sf += v[5*i + 4];
        }
        cout<<sm<<' '<<st<<' '<<sw<<' '<<str<<' '<<sf<<'\n';
        if(sm == n/2)
        --groups;
        if(st == n/2)
        --groups;
        if(sw == n/2)
        --groups;
        if(str == n/2)
        --groups;
        if(sf == n/2)
        --groups;

        if(n == 2 && sm != 2 && st != 2 && sw != 2 && str != 2 && sf != 2)
        {
            cout<<"YES\n";
        }
        else if(groups == 0 && n != 2)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}
