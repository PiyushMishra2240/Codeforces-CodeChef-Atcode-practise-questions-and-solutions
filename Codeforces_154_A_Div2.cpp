#include<bits/stdc++.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
         freopen("input.txt","r",stdin);
         freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m,count;
    cin>>n>>m; //n->boys,m->girls
    string s;
    if(n>m)
    {
        int f=1;
        while (m)
        {
            if(f==1)
            {
                s.push_back('B');
                f=0;
                n--;
            }
            else 
            {
                s.push_back('G');
                f=1;
                m--;
            }
        }
        while (n)
        {
            s.push_back('B');
            n--;
        }
        cout<<s;
    }
    else if(m > n)
    {
        int f=1;
        while (n)
        {
            if(f==0)
            {
                s.push_back('B');
                f=1;
                n--;
            }
            else 
            {
                s.push_back('G');
                f=0;
                m--;
            }
        }
        while (m)
        {
            s.push_back('G');
            m--;
        }
        cout<<s;
    }
    else 
    {
        int count = n+m;
        for (int i = 0; i < count; i++)
        {
            if(n>0)
            {
                s.push_back('B');
                n--;
            }
            if(m>0)
            {
                s.push_back('G');
                m--;
            }
        }
        cout<<s;
    }
    return 0;
}