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

    int t;
    cin>>t;
    while (t--)
    {
        int i = 0 , e = 0,temp;
        for(int j = 0 ; j < 5 ; j++)
        {
            cin>>temp;
            if(temp == 1)
            ++i;
            else if(temp == 2)
            e++;
        }
        if(i > e)
        cout<<"INDIA\n";
        else if(e > i)
        cout<<"ENGLAND\n";
        else
        cout<<"DRAW\n";
    }
    return 0;
}