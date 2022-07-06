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
    if(n < 42)
    {
        string s="AGC";
        int num = log10(n)+1;
        int zeros = 3 - num;
        while(zeros)
        {
            s += '0';
            zeros--;
        }
        cout<<s<<n;
    }
    else
    {
        string s="AGC";
        int num = log10(n)+1;
        int zeros = 3 - num;
        while(zeros)
        {
            s += '0';
            zeros--;
        }
        n++;
        cout<<s<<n;
    }
    return 0;
}