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
    ll ones=0,twos=0;
    for (ll i = 0; i < n; i++)
    {
        ll t;
        cin>>t;
        if(t==1)
        ones++;
        else
        twos++;
    }
    if(ones<3)  
    {
        if(ones == 0)
        {
            if(twos>0)
            for (ll i = 0; i < twos; i++)
            {
                cout<<"2 ";
            }
        }
        else if(ones == 1)
        {
            if(twos>0)
            cout<<"2 ";
            twos--;
            cout<<"1 ";
            ones--;
            if(twos>0)
            {
                for (ll i = 0; i < twos; i++)
                {
                    cout<<"2 ";
                }
            }
        }
        else if(ones == 2)
        {
            if(twos>0)
            cout<<"2 ";
            twos--;
            cout<<"1 ";
            ones--;
            if(twos>0)
            for (ll i = 0; i < twos; i++)
            {
                cout<<"2 ";
            }
            cout<<"1";
            ones--;
        }
    }
    else
    {
        for (ll i = 0; i < 3; i++)
        {
            cout<<"1 ";
        }
        ones-=3;
        if(twos>0)
        for (ll i = 0; i < twos; i++)
        {
            cout<<"2 ";
        }
        for (ll i = 0; i < ones; i++)
        {
            cout<<"1 ";
        }
    }
    return 0;
}