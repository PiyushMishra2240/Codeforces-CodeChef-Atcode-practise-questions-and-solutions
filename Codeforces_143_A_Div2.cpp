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

    int n,ans = 0;
    cin>>n;
    while(n--)
    {
            int temp,sum = 0;
            for (int i = 0; i < 3; i++)
            {
                cin>>temp;
                sum += temp;
            }
            if(sum >= 2)
                ++ans;
    }
    cout<<ans;
    return 0;
}