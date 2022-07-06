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

    int n,m,flag = 1,count = 0;
    cin>>n>>m;
    int check = 1;
    for (int i = 2; i <= sqrt(m); i++)
    {
        if(m%i == 0)
        {
            check = 0;
            break;
        }
    }
    if(check == 0)
    cout<<"NO\n";
    else
    {
        for (int i = n+1; i <= m; i++)
        { 
            flag = 1;
            for (int j = 2 ; j <= sqrt(i); j++)
            {
                if(i%j==0)
                {
                    flag = 0;
                    break;
                }
            }
            if(flag == 1)
            ++count;
            
        }
        if(count == 1)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}