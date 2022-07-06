#include <bits/stdc++.h>
using namespace std;             
#define int long long int
signed main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;                                              
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int c = 0;
        for (int i = 2; i < a; i++)
        {     
            if (a % i == 0)
            {  
                if (b % i != 0)
                {
                    c=1;
                }
            }
        }

        if (c == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}