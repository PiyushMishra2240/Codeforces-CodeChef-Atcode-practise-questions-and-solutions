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

    ll a,b,n;
    cin>>a>>b>>n;
    string s=to_string(a);
    if(a%b==0)
    {
        while (n--)
        {
            s.push_back('0');
        }
        cout<<s;
    }
    else
    {
        if((a*10)%b == 0)
        {
           while (n--)
            {
                s.push_back('0');
            }
            cout<<s;
        }
        else if((a*10 + 1)%b == 0)
        {
            s.push_back('1');
            n--;
            while (n--)
            {
                s.push_back('0');
            }
            cout<<s;
        }
        else if((a*10 + 2)%b == 0)
        {
            s.push_back('2');
            n--;
            while (n--)
            {
                s.push_back('0');
            }
            cout<<s;
        }
        else if((a*10+3)%b==0)
        {
            s.push_back('3');
            n--;
           while (n--)
            {  
                s.push_back('0');
            }
            cout<<s;
        }
        else if((a*10+4)%b==0)
        {
            s.push_back('4');
            n--;
            while (n--)
            {
            s.push_back('0');
            }
            cout<<s;
        }
        else if((a*10+5)%b==0)
        {
            s.push_back('5');
            n--;
            while (n--)
            {
                s.push_back('0');
            }
            cout<<s;
        }
        else if((a*10+6)%b==0)
        {
            s.push_back('6');
            n--;
            while (n--)
            {
                s.push_back('0');
            }
            cout<<s;
        }
        else if((a*10+7)%b==0)
        {
            s.push_back('7');
            n--;
            while (n--)
            {
                s.push_back('0');
            }
            cout<<s;
        }
        else if((a*10+8)%b==0)
        {
            s.push_back('8');
            n--;
            while (n--)
            {   
                s.push_back('0');
            }
            cout<<s;
        }
        else if((a*10+9)%b==0)
        {
            s.push_back('9');
            n--;
            while (n--)
            {
                s.push_back('0');
            }
            cout<<s;
        }
        else
        cout<<"-1";
    }
   
    return 0;
}