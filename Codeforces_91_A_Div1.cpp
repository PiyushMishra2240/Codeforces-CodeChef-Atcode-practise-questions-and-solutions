#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool check(ll num)
{
    int f=0;
    while(num)
    {
        if(num%10 != 4 || num%10 != 7)
        {
            f=1;
            break;
        }
        num = num/10;
    }
    if(f==1)
    return false;

    return true;
}

int main()
{
    #ifndef ONLINE_JUDGE
         freopen("input.txt","r",stdin);
         freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    vector<ll> v;
    for (ll i = 1; i <= 10000000000; i++)
    {
        if(check(i))
        v.push_back(i);
    }
    ll l,r,ans=0;
    cin>>l>>r;
    ll indexl,indexr;
    for (ll i = 0; i < v.size(); i++)
    {
        if(l <= v[i])
        {
            indexl = i;
            break;
        }
    }

    cout<<indexl<<" ";
    ans += ((v[indexl] - l) + 1) * v[indexl];
    for (ll i = indexl; i < v.size(); i++)
    {
        if(r <= v[i])
        {
            indexr = i;
            break;
        }
    }
    cout<<indexr<<" ";
    for (ll i = indexl; i <= indexr; i++)
    {
        ans += (v[indexr] - v[indexl])*v[indexr];
    }
    cout<<ans;
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// #define int long long
// int32_t main()
// {
//     vector<int> v;
//     v.push_back(0);
//     int i=0, mx=10000000000;
//     while(v[v.size()-1]<mx)
//     {
//         v.push_back((v[i]*10)+4);
//         v.push_back((v[i]*10)+7);
        
//         i++;
//     }
    
//     int l, r, sum=0;
//     cin>>l>>r;
//     int n=v.size();
//     int in=0;
//     for(int i=0; i<n; i++)
//     {
//         if(v[i]<l)
//             in=i+1;
//     }
//     sum+=v[in];
//     while(l<=r)
//     {
        
//         int x=min(r, v[in]);
//         sum+=(x-l)*(v[in]);
        
//         l=v[in];
//         in++;
//     }
//     cout<<sum<<"\n";
//     return 0;
// }