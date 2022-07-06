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
        string s;
        cin>>s;
        if(n%2==1)cout<<"NO\n";
        else
        {
            ll o=0,z=0;//o->ones,z->zeros
            for (ll i = 0; i < n; i++)
            {
                if(s[i] == '1')o++;
                else z++;
            }
            if(o == z)
            {
                cout<<"YES\n";
                cout<<"1 "<<n<<'\n';
            }
            else if(o == n || z == n)
            {
                cout<<"YES\n";
                cout<<"1 "<<n/2<<'\n';
            }
            else
            {
                if(o<z)
                {
                    ll d=n/2-o;
                    ll cnt=0;
                    ll ei=-1;
                    for (ll i = 0; i < n; i++)
                    {
                        if(s[i] == '0')cnt++;
                        else if(s[i] == '1')cnt--;
                        if(cnt == d)
                        {
                            ei=i+1;
                            break;
                        }
                    }
                    if(cnt == d && ei != -1)
                    {
                        cout<<"YES\n";
                        cout<<"1"<<" "<<ei<<'\n';
                    }
                    else
                    cout<<"NO\n";
                }
                else
                {
                    ll d=n/2-z;
                    ll cnt=0;
                    ll ei=-1;
                    for (ll i = 0; i < n; i++)
                    {
                        if(s[i] == '1')cnt++;
                        else if(s[i] == '0')cnt--;
                        if(cnt == d)
                        {
                            ei=i+1;
                            break;
                        }
                    }
                    if(cnt == d && ei != -1)
                    {
                        cout<<"YES\n";
                        cout<<"1"<<" "<<ei<<'\n';
                    }
                    else
                    cout<<"NO\n";
                }
            }
        }
    }
    return 0;
}