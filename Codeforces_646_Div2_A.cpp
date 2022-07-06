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

    ll t;
    cin>>t;
    while (t--)
    {
        ll n,x;
        cin>>n>>x;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        ll odd=0,even=0;
        for (ll i = 0; i < n; i++)
        {
            if(a[i]%2==0)
            even++;
            else
            odd++;
        }
        if(odd==0)
        {
            cout<<"No\n";
            continue;
        }
        if(x==0)
        {
            cout<<"Yes\n";
            continue;
        }
        if (x == n)
		{
			if (odd % 2 == 0)
				cout << "No\n";
			else
				cout << "Yes\n";
			continue;
		}
		if (odd == n && x % 2 == 0)
		{
		    cout << "NO\n";
		    continue;
		}
		cout << "Yes\n";
    }
    return 0;
}