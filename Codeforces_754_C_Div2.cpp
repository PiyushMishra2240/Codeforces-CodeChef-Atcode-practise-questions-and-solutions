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
        int f=0;
        for (ll i = 0; i < s.size()-1; i++)
        {
            if(s[i] == 'a' && s[i+1] == 'a')
            {
                cout<<"2\n";
                f=1;
                break;
            }
        }
        if(f==0)
        {
            for (ll i = 0; i < s.size()-2;i++)
            {
                if(s[i] == 'a' && (s[i+1] == 'b' || s[i+1] == 'c') && s[i+2] == 'a')
                {
                    cout<<"3\n";
                    f=1;
                    break;
                }
            }
            
        }
        if(f==0)
        {
            for (ll i = 0; i < s.size()-2; i++)
            {
                if(i+3 < s.size())
                {
                    if(s[i] == 'a' && s[i+1] == 'b' && s[i+2] == 'c' && s[i+3] == 'a')
                    {
                        cout<<"4\n";
                        f=1;
                        break;
                    }
                    else if(s[i] == 'a' && s[i+1] == 'c' && s[i+2] == 'b' && s[i+3] == 'a')
                    {
                        cout<<"4\n";
                        f=1;
                        break;
                    }
                }
                else
                break;
            }
            
        }
        if(f==0)
        {   
            for (ll i = 0; i < s.size(); i++)
            {
                if(i+6 < s.size())
                {
                     if(s[i] == 'a' && s[i+1] == 'b' && s[i+2] == 'b' && s[i+3] == 'a' && s[i+4] == 'c' && s[i+5] == 'c' && s[i+6] == 'a')
                        {
                            cout<<"7\n";
                            f=1;
                            break;
                        }
                        else if(s[i] == 'a' && s[i+1] == 'c' && s[i+2] == 'c' && s[i+3] == 'a' && s[i+4] == 'b' && s[i+5] == 'b' && s[i+6] == 'a')
                        {
                            cout<<"7\n";
                            f=1;
                            break;
                        }
                }
                else 
                break;
                
            }
            
        }
        if(f==0)
        {
            cout<<"-1\n";
        }
    }
    return 0;
}