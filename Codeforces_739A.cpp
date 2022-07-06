#include<bits/stdc++.h>

using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,k;
    cin>>t;
    while (t--)
    {
        cin>>k;
        for(int i = 1 ; ; i++)
        {   
            if(i%3 == 0 || i%10 == 3)
            continue;
            k--;
            if(k == 0)
            {
                cout<<i<<"\n";
                break;
            }
        }
    }
    
    
    return 0;
}