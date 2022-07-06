#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        string s;
        int ca = 0 , cb = 0 , flag = 0;
        cin>>s;
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                if(s[j] == 'a')
                ++ca;
                if(s[j] == 'b')
                ++cb;
                if(ca == cb)
                {
                    cout<<i+1<<" "<<j+1<<"\n";
                    flag = 1;
                    break;
                }
            }
            if(flag)
            break; 
        }
        if(flag == 0)
        cout<<"-1 -1"<<"\n";
        
    }
    return 0;
    
}