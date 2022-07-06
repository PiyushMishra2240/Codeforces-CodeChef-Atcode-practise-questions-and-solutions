#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    ll f1=0,f2=0,f3=0;
    cin>>s;
    if(s.size() == 0)
    cout<<"Yes";
    else if(s.size() == 1)
    {
        if(s[0] == 'o')
        cout<<"Yes";
        else if(s[0] == 'x')
        cout<<"Yes";
        else
        cout<<"No";
    }
    else
    {
        if(s[0] == 'o')
        {   
            for (ll i = 0; i < s.size(); i++)
            {
                if(i%3 == 0)
                {
                    if(s[i] != 'o')
                    {
                        f1 = 1;
                        break;
                    }
                }
                else if(i%3 == 1)
                {
                    if(s[i] != 'x')
                    {
                        f2 = 1;
                        break;
                    }
                }
                else if(i%3 == 2)
                {
                    if(s[i] != 'x')
                    {
                        f3 = 1;
                        break;
                    }
                }
            }
            if(f1 == 1 || f2 == 1 || f3 == 1)
            cout<<"No\n";
            else
            cout<<"Yes\n";
        }

        else if(s[0] == 'x' && s[1] == 'x')
        {
            for (ll i = 0; i < s.size(); i++)
            {
                if(i%3 == 0)
                {
                    if(s[i] != 'x')
                    {
                        f1 = 1;
                        break;
                    }
                }
                else if(i%3 == 1)
                {
                    if(s[i] != 'x')
                    {
                        f2 = 1;
                        break;
                    }
                }
                else if(i%3 == 2)
                {
                    if(s[i] != 'o')
                    {
                        f3 = 1;
                        break;
                    }
                }
            }
            if(f1 == 1 || f2 == 1 || f3 == 1)
            cout<<"No\n";
            else
            cout<<"Yes\n";
        }

        else if(s[0] == 'x' && s[1] == 'o')
        {
            for (ll i = 0; i < s.size(); i++)
            {
                if(i%3 == 0)
                {
                    if(s[i] != 'x')
                    {
                        f1 = 1;
                        break;
                    }
                }
                else if(i%3 == 1)
                {
                    if(s[i] != 'o')
                    {
                        f2 = 1;
                        break;
                    }
                }
                else if(i%3 == 2)
                {
                    if(s[i] != 'x')
                    {
                        f3 = 1;
                        break;
                    }
                }
            }
            if(f1 == 1 || f2 == 1 || f3 == 1)
            cout<<"No\n";
            else
            cout<<"Yes\n";
        }

    }
        
    return 0;
}