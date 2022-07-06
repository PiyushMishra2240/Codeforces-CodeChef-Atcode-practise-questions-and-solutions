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
        int n;
        cin>>n;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int temp;
            int num = 0,j = 0;
            cin>>temp;
                while (temp)
                {
                    num += pow(2,j)*(temp%10);
                    temp /= 10;
                    ++j;
                }
                ans = ans + num;
        }
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            v.push_back(ans%2);
        }
        reverse(v.begin(),v.end());
        string s = "";
        for (int i = 0; i < v.size() ; i++)
        {
            s += to_string(v[i]);
        }
        
        cout<<s<<'\n';
    }
    return 0;
}