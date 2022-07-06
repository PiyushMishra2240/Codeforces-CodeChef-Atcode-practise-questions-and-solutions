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

    int i=0,j=0,f=0;
    int arr[5][5];
    for (i = 0 ; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            cin>>arr[i][j];
            if(arr[i][j] == 1)
            {
                f = 1;
                break;
            }
        }
        if(f)
        break;
    }
    cout<<abs(2-i)+abs(2-j);
    return 0;
}