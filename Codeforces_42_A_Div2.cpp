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

    int n;
    cin>>n;
    if(n==1)
    {
        string s;
        cin>>s;
        cout<<s;
    }
    else
    {
        string s1,s2,temp;
        int c1=1,c2=1;
        cin>>s1>>temp;
        n-=2;
        while(temp == s1 && n > 0)
        {
            ++c1;
            n--;
            cin>>temp;
        }
        s2=temp;
        while (n--)
        {
            temp.clear();
            cin>>temp;
            if(temp == s1)
            ++c1;
            else
            ++c2;
        }
        if(c1>c2)
        cout<<s1;
        else
        cout<<s2;
    }
    return 0;
}