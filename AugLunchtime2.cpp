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

    ll t,l,r,numberofTerms;
    cin>>t;
    while(t--)
    {
        ll i = 0;
        cin>>l>>r;

        while((l+i)%3 != 0 && (l+i) <= r) //finding the leftmost number which is a multiple of 3
        {
            ++i;
        }

        if((l+i) <= r)
            l = l + i;

        i = 0;
        while ( (r-i)%3 != 0 && (r-i) >= l ) //finding the rightmost number which is a multiple of 3
        {
            ++i;
        }
        if((r-i) >= l) //for testcases like 1 1
            r = r - i;

        if(l == r)
        {
            if( l%3 != 0 )
                cout<<"0\n";
            else
            cout<<"1\n";
        }
        else
        {
            numberofTerms = ((r-l)/3) + 1;
            cout<<numberofTerms<<"\n";
        }    
    }

    return 0;
}
