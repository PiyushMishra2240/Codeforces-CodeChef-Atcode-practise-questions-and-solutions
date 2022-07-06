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

    ll n;
    cin>>n;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    vector<ll> v1,v2,v3;
    int f=0;
    if(n > 3)
    {
        v1.push_back(arr[0]);
        if(arr[1] > 0 && arr[2] > 0)
        {
            v2.push_back(arr[1]);
            v2.push_back(arr[2]);
        }
        else
        {
            if(arr[1] < 0 && arr[2] == 0)
            {
                v2.push_back(arr[3]);
                f=1;
            }
            else
            {
                v2.push_back(arr[1]);
                v2.push_back(arr[2]);
            }

            if(f==1)
            {
                v3.push_back(arr[1]);
                v3.push_back(arr[2]);
                for (ll i = 4; i < n; i++)
                {
                    v3.push_back(arr[i]);
                }
            }
            else
            {
                for (ll i = 3; i < n; i++)
                {
                    v3.push_back(arr[i]);
                } 
            }
        }
    }
    else
    {
        v1.push_back(arr[0]);
        v3.push_back(arr[1]);
        v2.push_back(arr[2]);
    }
    if(n>3)
    {
        cout<<v1.size()<<" "<<v1[0]<<"\n";
        if(f==1)
        cout<<v2.size()<<" "<<v2[0]<<'\n';
        else
        cout<<v2.size()<<" "<<v2[0]<<" "<<v2[1]<<'\n';
        cout<<v3.size()<<" ";
        for (ll i = 0; i < v3.size(); i++)
        {
            cout<<v3[i]<<" ";
        }
    }
    else
    {
        cout<<v1.size()<<" "<<v1[0]<<"\n";
        cout<<v2.size()<<" "<<v2[0]<<"\n";
        cout<<v3.size()<<" "<<v3[0]<<"\n";
    }
    return 0;
    
}