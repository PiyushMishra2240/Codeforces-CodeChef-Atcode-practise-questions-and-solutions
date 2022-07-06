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
        string a,b;
        cin>>a>>b;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end(),greater<char>());
        vector<char> ans(2*n);
        ll i=0,j=2*n-1,f=0,a1=0,b1=0;
        while(i!=j)
        {
            if(f==0)
            {
                if(a[a1]<b[b1])
                {
                    ans[i]=a[a1];
                    i++;
                    a1++;
                    f=1;
                }
                else
                {
                    ans[j]=a[a1];
                    j--;
                    a1++;
                    f=1;
                }
            }
            else
            {
                if(b[b1]>a[a1])
                {
                    ans[i]=b[b1];
                    i++;
                    b1++;
                    f=0;
                }
                else
                {
                    ans[j]=b[b1];
                    j--;
                    b1++;
                    f=0;
                }
            }
        }
        if(a1<n)
        {
            ans[i]=a[a1];
        }
        else
        {
            ans[i]=b[b1];
        }
        for (ll k = 0; k < 2*n; k++)
        {
            cout<<ans[k];
        }
        cout<<'\n';
    }
    return 0;
}