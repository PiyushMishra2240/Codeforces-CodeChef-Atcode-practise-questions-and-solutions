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
    int arr[5];
    map<int,int> m;
    for(int i = 0 ; i < 5 ; i++)
    {
        cin>>arr[i];
        m[arr[i]]++;
    }
   for(auto x : m)
   {
       if(x.second == 2)
        {
            cout<<x.first<<" "<<x.second<<" ";
            break;
        }
   }
    return 0;
}