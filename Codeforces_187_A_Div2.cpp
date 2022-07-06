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

    int t,ans=0;
    cin>>t;\
    int b1,b2;
    cin>>b1>>b2;
    unordered_map<int,int> m;
    m.insert({b2,b1});
    while (t--)
    {
        cin>>b1>>b2;
        auto itr = m.find(b2);
        if(itr != m.end())
        {
            if(itr -> first == itr -> second)   
            ++ans;
        }
        else
        ++ans;
        m.insert({b2,b1});
    }
    cout<<ans;
    return 0;
}