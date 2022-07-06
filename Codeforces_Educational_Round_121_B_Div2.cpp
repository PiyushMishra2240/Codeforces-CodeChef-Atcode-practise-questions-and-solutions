#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t; 
    cin>>t;
    while (t--)
    {
        string x;
        cin>>x;
        if(x.size() == 2)
        {
            ll temp = x[0]-'0' + x[1]-'0';
            cout<<temp<<'\n';
            continue;
        }
        if(x.size() == 1)
        {
            cout<<x<<'\n';
        }
        ll sum=0;
        ll i=0,j=1,f=0,indexi=0,indexj=0,globalsum=0;
        while(j<x.size())
        {
            sum=0;
            sum+= (x[i]-'0') + (x[j]-'0');
            if(sum>=10)
            {
                f=1;
                indexi=i;
                indexj=j;
                i++;
                j++;
                globalsum=sum;
            }
            else
            {
                j++;
                i++;
            }
        }
        if(f==1)
        {
            vector<ll> ans;
            for (ll m = 0; m < indexi; m++)
            {
                ans.push_back(x[m]-'0');
            }
            ans.push_back(globalsum);
            for (ll m = indexj+1; m < x.size(); m++)
            {
                ans.push_back(x[m]-'0');
            }
            for (ll p = 0; p < ans.size(); p++)
            {
                cout<<ans[p];
            }
            cout<<'\n';
        }
        else
        {
            ll temp = x[0]-'0'+x[1]-'0';
            vector<ll> ans;
            ans.push_back(temp);
            for (ll m = 2; m < x.size(); m++)
            {
                ans.push_back(x[m]-'0');
            }
            for (ll m = 0; m < ans.size(); m++)
            {
                cout<<ans[m];
            }
            cout<<'\n';
        }
    }
    return 0;
}