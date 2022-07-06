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
        ll n;
        cin>>n;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        ll num1=0,num2=0,mi=INT_MAX;
        for (ll i = 0; i < n-1; i++)
        {
            if(arr[i+1]-arr[i] < mi)
            {
                mi=arr[i+1]-arr[i];
                num1=arr[i];
                num2=arr[i+1];
            }
        }
        ll freqnum1=0,freqnum2=0;
        for (ll i = 0; i < n; i++)
        {
            if(arr[i] == num1)
            freqnum1++;
            if(arr[i] == num2)
            freqnum2++;
        }
        if(num1 != num2)
        {
            vector<ll> ans;
            ans.push_back(num1);
            freqnum1--;
            while (freqnum1)
            {
                ans.push_back(num1);
                freqnum1--;
            }
            for (ll i = 0; i < n; i++)
            {
                if(arr[i] > num1 && arr[i] != num2)
                {
                ans.push_back(arr[i]);
                }
            }
            for (ll i = 0; i < n; i++)
            {
                if(arr[i] < num1)
                {
                    ans.push_back(arr[i]);
                }
            }
            while (freqnum2)
            {
                ans.push_back(num2);
                freqnum2--;
            }
            
            for (ll i = 0; i < n; i++)
            {
                cout<<ans[i]<<" ";
            }
            cout<<'\n';
        }
        else if(num1==num2)
        {
            vector<ll> ans;
            ans.push_back(num1);
            freqnum1--;
            while (freqnum1 != 1)
            {
                ans.push_back(num1);
                freqnum1--;
            }
            for (ll i = 0; i < n; i++)
            {
                if(arr[i] > num1)
                {
                ans.push_back(arr[i]);
                }
            }
            for (ll i = 0; i < n; i++)
            {
                if(arr[i] < num1)
                {
                    ans.push_back(arr[i]);
                }
            }
            ans.push_back(num1);
            freqnum1--;
            for (ll i = 0; i < n; i++)
            {
                cout<<ans[i]<<" ";
            }
            cout<<'\n';
        }
    }
    return 0;
}