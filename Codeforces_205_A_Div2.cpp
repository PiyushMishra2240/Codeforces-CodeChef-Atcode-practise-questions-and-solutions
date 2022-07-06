#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    #ifndef ONLINE_JUDGE
         freopen("input.txt","r",stdin);
         freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, countx=0, county=0;
    cin>>n;
    vector<pair<int, int>> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i].first;
        v[i].first%=2;
        countx+=v[i].first;
    }
    for(int i=0; i<n; i++)
    {
        cin>>v[i].second;
        v[i].second%=2;
        county+=v[i].second;
    }
    sort(v.begin(), v.end());
    
    if(countx%2==0 && county%2==0)
        cout<<0<<"\n";
    else
    if((countx%2!=0 && county%2==0) || (countx%2==0 && county%2!=0))
        cout<<-1<<"\n";
    else
    {
        int i=0, f=0;
        while(i<n && f==0)
        {
            if((v[i].first==0 && v[i].second==1) || (v[i].first==1 && v[i].second==0))
                f++;
                
            i++;
        }
        if(f>0)
            cout<<1<<"\n";
        else
            cout<<-1<<"\n";
    }
    return 0;
}