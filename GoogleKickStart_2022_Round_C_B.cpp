#include<bits/stdc++.h>
using namespace std;

//typedefs
typedef long long ll;
typedef long double ld;

//defines
#define all(x) begin(x), end(x)
#define F first
#define S second

//constants
constexpr ll INF = 4e18;
constexpr ld EPS = 1e-9;
constexpr ll MOD = 998244353; // 1e9 + 7;

// Operator overloads
template <typename T1, typename T2> // cin >> pair<T1, T2>
istream &operator>>(istream &istream, pair<T1, T2> &p)
{
	return (istream >> p.first >> p.second);
}
 
template <typename T> // cin >> vector<T>
istream &operator>>(istream &istream, vector<T> &v)
{
	for (auto &it : v)
		cin >> it;
	return istream;
}
 
template <typename T1, typename T2> // cout << pair<T1, T2>
ostream &operator<<(ostream &ostream, const pair<T1, T2> &p)
{
	return (ostream << p.first << " " << p.second);
}
template <typename T> // cout << vector<T>
ostream &operator<<(ostream &ostream, const vector<T> &c)
{
	for (auto &it : c)
		cout << it << " ";
	return ostream;
}


ll power(ll n, ll times)
{
    ll ans=1;
    for (ll i = 0; i < times; i++)
    {
        ans*=n;
    }
    return ans;
}

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
    ll c=1;
    while(t--){
        cout<<"Case #"<<c<<": ";
        c++;
        ll n,x,y;
        cin>>n>>x>>y;
        ll sum=(n*(n+1))/2;
        bool flag=false;
        for(ll i=1;i<(n*(n+1))/2;i++){
            ll tt=sum-i;
            if((tt%x == 0 && i%y == 0) || (tt%y == 0 && i%x == 0)){
                ll xq=tt/x;
                ll yq=i/y; 
                // cout<<xq<<" "<<yq<<'\n';
                if(xq == yq || x/y == tt/i){
                    flag=true;
                    break;
                }
                ll xqr=tt/y;
                ll yqr=i/x;
                if(xqr == yqr || y/x == i/tt){
                    flag=true;
                    break;
                }
            }
        }
        if(flag)cout<<"POSSIBLE\n";
        else cout<<"IMPOSSIBLE\n";
    }
    return 0;
}