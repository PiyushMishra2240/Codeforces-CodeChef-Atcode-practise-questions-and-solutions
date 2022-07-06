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
       string s;
       cin>>s;
       char c = s[0];
       int index;
       for (int i = 1; i < s.size(); i++)
       {
           if(s[i] < c)
           c=s[i];
       }
       for (int i = 0; i < s.size(); i++)
       {
           if(s[i] == c)
           {
               index = i;
               break;
           }
       }
      string s1;
      for (int i = 0; i < s.size(); i++)
      {
          if(i != index)
          s1.push_back(s[i]);
      }
      cout<<c<<" "<<s1<<'\n';
    }
    return 0;
}