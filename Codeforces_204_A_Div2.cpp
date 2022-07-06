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

    int n,five=0,zeros=0;
    string s;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;
        if(temp == 5)
        ++five;
        else if(temp == 0)
        ++zeros;
    }
    if(zeros == 0)
    cout<<"-1";
    else
    {
        if(five < 9)
        {
            cout<<"0";
        }
        else
        {
            int q = five/9;
            for (int i = 0; i < 9*q; i++)
            {
                s.push_back('5');
            }
            for (int i = 0; i < zeros; i++)
            {
                s.push_back('0');
            }
            cout<<s;
        }
    }
    
    return 0;
}