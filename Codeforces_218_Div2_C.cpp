#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    #ifndef ONLINE_JUDGE
         freopen("input.txt","r",stdin);
         freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    ll nb,ns,nc;
    ll pb,ps,pc;
    ll r;
    cin>>s>>nb>>ns>>nc>>pb>>ps>>pc>>r;
    ll b=0,ss=0,c=0;
    for (ll i = 0; i < s.size(); i++)
    {
        if(s[i] =='B')
        b++;
        else if(s[i] =='S')
        ss++;
        else if(s[i] =='C')
        c++;
    }
    ll ans=0,b1=0,s1=0,c1=0;
    if(b!=0)
    b1=nb/b;
    if(ss!=0)
    s1=ns/ss;                                       //b=2,c=1,nb=1,nc=1,ns=10
    if(c!=0)
    c1=nc/c;
    ll temp=min(b1,s1);
    ll mi=min(temp,c1);
    ans=mi;
    nb-=mi;
    ns-=mi;
    nc-=mi;
    while(nb*r<b || ns*r<ss || nc*r<c || r<=0)
    {
        if(b!=0)
        r-=(b-nb)*pb;
        if(ss!=0)
        r-=(ss-ns)*ps;
        if(c!=0)
        r-=(c-nc)*pc;
        if(b!=0)
        nb=b;
        if(ss!=0)
        ns=ss;
        if(c!=0)
        nc=c;
        if(r>=0)
        ans++;
        nb-=mi;
        ns-=mi;
        nc-=mi;
    }
    cout<<ans<<'\n';
    return 0;
}