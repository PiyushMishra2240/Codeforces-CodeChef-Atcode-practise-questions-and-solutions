#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,c=1;
    cin>>t;
    while (t--)
    {
        int n,k,op = 0;
        string s;
        cin>>n>>k>>s;
        int i = 0;
        while (i < n-i-1)
        {
            if(s[i] != s[n-i-1])
            op++;
            i++;
        }
        cout<<"Case #"<<c<<": "<<abs(k-op);
        cout<<'\n';
        c++;
    }
    return 0;
}