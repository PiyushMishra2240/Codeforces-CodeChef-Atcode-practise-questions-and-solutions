#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

// ll ans=-1;
// void check(ll num, vector<ll> val,ll n)
// {
//     if(ans != -1)return;
//     ll num1=0;
//     ll tt=num;
//     while (tt)
//     {
//         num1=num1*10 + tt%10;
//         tt/=10;
//     }
//     if(n==0)
//     {
//         if(num1%8==0)
//         {
//             ans=num1;
//             num=0;
//         }
//         return;
//     }
//     if(num1%8==0)
//     {
//         ans=num1;
//         num=0;
//         return;
//     }
//     check(num*10+val[n-1],val,n-1);
//     check(num,val,n-1);
// }

int main()
{
    #ifndef ONLINE_JUDGE
         freopen("input.txt","r",stdin);
         freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin>>s;
    ll num=-1;
    for (ll i = 0; i < s.size(); i++)
    {
        if((s[i]-'0')%8 == 0){
            num=s[i]-'0';
            break;
        }
    }
    if(num%8==0)cout<<"YES\n"<<num<<'\n';
    else
    {
        for (ll i = 0; i < s.size(); i++)
        {
            for (ll j = i+1; j < s.size(); j++)
            {
                num=(s[i]-'0')*10 + (s[j]-'0');
                if(num%8==0)break;
            }
            if(num%8==0)break;
        }
        if(num%8 == 0)cout<<"YES\n"<<num<<'\n';
        else
        {
            for (ll i = 0; i < s.size(); i++)
            {
                for (ll j = i+1; j < s.size(); j++)
                {
                    for (ll k = j+1; k < s.size(); k++)
                    {
                        num=(s[i]-'0')*100 + (s[j]-'0')*10 + (s[k]-'0');
                        if(num%8==0)break;
                    }
                    if(num%8==0)break;  
                }
                if(num%8==0)break;
            }
            if(num % 8 == 0)cout<<"YES\n"<<num<<'\n';
            else cout<<"NO\n";
        }
    }
    return 0;
}