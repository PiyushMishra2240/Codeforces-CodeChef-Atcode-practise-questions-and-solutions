#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

struct data
{
    string s;

    void getstring()
    {
        getline(cin,s);
    }
    void printstring()
    {
        cout<<s<<"\n";
    }
    string count()
    {
        return s;
    }
};


int main()
{
    #ifndef ONLINE_JUDGE
         freopen("input.txt","r",stdin);
         freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin>>n;
    data arr[n+1];
    for (int i = 0; i < n+1; i++)
    {
        arr[i].getstring();
    }
    
    unordered_map<string,ll> m;

    for (int i = 0; i < n+1; i++)
    {
        m[arr[i].count()]++;
    }
    ll ans=1;
    for (auto itr = m.begin(); itr != m.end(); itr++)
    {
       ans = max(itr->second,ans);
    }

    cout<<ans;    
    return 0;
}