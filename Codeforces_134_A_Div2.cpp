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

    int n,m,temp;
    cin>>n>>m;
    temp = n;
    priority_queue<int> q;
    priority_queue<int,vector<int>,greater<int>> q1;
    for (int i = 0; i < m; i++)
    {
        int t;
        cin>>t;
        q.push(t);
        q1.push(t);
    }
    int ma=0,mi=0;
    while (n)
    {
        ma += q.top();
        mi += q1.top();
        int f = q.top();
        int g = q1.top();
        q.pop();
        q1.pop();
        if(f-1 > 0)
        q.push(f-1);
        if(g-1 > 0)
        q1.push(g-1);
        n--;
    }
    cout<<ma<<" "<<mi;
    return 0;
}