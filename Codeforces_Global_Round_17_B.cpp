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

    ll t;
    cin>>t;
    while (t--)
    {
        ll n,f=0;
        cin>>n;
        unordered_map<ll,ll> m;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin>>arr[i];
            m[arr[i]]++;
        }
        if(m.size()>3)
        {
            ll num1,num2;
            for (ll i = 0; i < n/2; i++)
            {
                if(arr[i] != arr[n-i-1])
                {
                    num1 = arr[i];
                    num2 = arr[n-i-1];
                    f=1;
                    break;
                }
            }
            if(f==0)
            cout<<"YES\n";
            else
            {
                ll h=0,k=0;
                vector<ll> v,v1;
                for (ll i = 0; i < n; i++)
                {
                    if(arr[i]!=num1)
                    v.push_back(arr[i]);
                    if(arr[i]!=num2)
                    v1.push_back(arr[i]);
                }
                for (ll i = 0; i < v.size(); i++)
                {
                    if(v[i]!=v[v.size()-i-1])
                    {
                        h=1;
                        break;
                    }
                }
                for (ll i = 0; i < v1.size(); i++)
                {
                    if(v1[i]!=v1[v1.size()-i-1])
                    {
                        k=1;
                        break;
                    }
                }
                if(h==0 || k == 0)
                cout<<"YES\n";
                else
                cout<<"NO\n";
            }
        }
        else
        {
            if(m.size()==1)
            cout<<"YES\n";
            else if(m.size() == 2)
            {
                cout<<"YES\n";
            }
            else
            {
                ll num1,num2,num3;
                auto itr = m.begin();
                num1 = itr -> first;
                itr++;
                num2 = itr->first;
                itr++;
                num3 = itr->first;
                vector<ll> v1,v2,v3;
                ll f1=0,f2=0,f3=0;
                for (ll i = 0; i < n; i++)
                {
                    if(arr[i]!=num1)
                    v1.push_back(arr[i]);
                    if(arr[i]!=num2)
                    v2.push_back(arr[i]);
                    if(arr[i]!=num3)
                    v3.push_back(arr[i]);
                }
                for (ll i = 0; i < v1.size(); i++)
                {
                    if(v1[i]!=v1[v1.size()-1-i])
                    {
                        f1=1;
                        break;
                    }
                }
                for (ll i = 0; i < v2.size(); i++)
                {
                    if(v2[i]!=v2[v2.size()-i-1])
                    {
                        f2=1;
                        break;
                    }
                }
                for (ll i = 0; i < v3.size(); i++)
                {
                    if(v3[i]!=v3[v3.size()-1-i])
                    {
                        f3=1;
                        break;
                    }
                }
                if(f1 == 0 || f2 == 0 || f3 == 0)
                {
                    cout<<"YES\n";
                }
                else
                cout<<"NO\n";
            }
        }
    }
    return 0;
}