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
    
    ll n,q;
    cin>>n>>q;
    vector<ll> a(n);cin>>a;
    vector<ll> b=a;
    sort(all(a),greater<ll>());
    sort(all(b));
    for(ll i=1;i<n;i++){
        b[i]+=b[i-1];
        a[i]+=a[i-1];
    }
    while(q--){
        ll x,y;
        cin>>x>>y;
        if(x==1){
            cout<<a[0]<<'\n';
            continue;
        }
        if(x==y && x!=n){
            cout<<a[x-1]<<'\n';
            continue;
        }
        if(x==n){
            cout<<b[y-1]<<'\n';
            continue;
        }
        cout<<a[x-1]-a[x-y-1]<<'\n';
    }
    return 0;
}