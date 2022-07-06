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

    string s1,s2,s3;
    int f=0;
    cin>>s1>>s2>>s3;
    unordered_map<char,int> m;
    for (int i = 0; i < s3.size(); i++)
    {
        m[s3[i]]++;
    }
    
    for (int i = 0; i < s1.size(); i++)
    {
        auto itr = m.find(s1[i]);
        if(itr != m.end() && itr -> second > 0)
        {
            itr -> second--;
        }
        else
        {
            cout<<"NO";
            f=1;
            break;
        }
    }

    if(f == 0)
    for (int i = 0; i < s2.size(); i++)
    {
        auto itr = m.find(s2[i]);
        if(itr != m.end() && itr -> second > 0)
        {
            itr -> second--;
        }
        else
        {
            cout<<"NO";
            f=1;
            break;
        }
    }
    if(f==0)
    for (auto itr = m.begin(); itr != m.end(); itr++)
    {
        if(itr->second != 0)
        {
            f=1;
            cout<<"NO";
            break;
        }
    }
    
    if(f==0)
    cout<<"YES";
    return 0;
}