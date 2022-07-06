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
        if(n%2 == 0)
        cout<<"0\n";
        else
        {
            string s = to_string(n);
            ll size = s.length();
            ll q = n/pow(10,size-1);
            if(q%2 == 0)
            cout<<"1\n";
            else
            {
                ll f = 0;
                while (n)
                {
                    ll temp = n%10;
                    if(temp % 2 == 0)
                    {
                        cout<<"2\n";
                        f = 1;
                        break;
                    }
                    n /= 10;
                }
                if(f == 0)
                cout<<"-1\n";
            }
        }

    }
    
    return 0;
}