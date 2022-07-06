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
    vector<int> v;
    for (int i = 0; i < 3*n; i++)
    {
        int t;
        cin>>t;
        v.push_back(t);
    }
    
    int sx=0,sy=0,sz=0;
    for (int i = 0 , j = 0; i < n; i++,j += 2)
    {
        sx+=v[i+j];
    }
    for (int i = 0,j=1; i < n; i++,j+=2)
    {
        sy+=v[i+j];
    }
    for (int i = 0,j=2; i < n; i++,j+=2)
    {
        sz+=v[i+j];
    }
    if(sx == 0 && sy == 0 && sz == 0)
    cout<<"YES\n";
    else
    cout<<"NO\n";
    return 0;
}