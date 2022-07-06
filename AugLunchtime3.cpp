#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        if(n%4 != 0)
        {
            cout<<"NO\n";
            continue;
        }
        else
        {
            cout<<"YES\n";
        }
        vector<ll>v1,v2;
        ll a = 1,flag = 0,c = n/2;
        ll b = n;
        while (c)
        {
           if(flag == 0)
           {
               v1.push_back(a);
               a++;
               flag = 1;
           }
           else
           {
               v1.push_back(b);
               b--;
               flag = 0;
           }
           c--;
        }

        for (ll i = a; i <= b; i++)
        {
            v2.push_back(i);
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        for(auto x:v1)
        {
            cout<<x<<" ";
        }
        cout<<"\n";
        for(auto y:v2)
        {
            cout<<y<<" ";
        }
        cout<<"\n";
        
    }
    return 0;
}