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
    vector<ll> cross(200001,0);
    cross[1]=0;
    cross[2]=1;
    cross[3]=3;
    for(ll i=4;i<=1000;i++)cross[i]=cross[i-1]+(i-1);
    while(t--){
        ll n;
        cin>>n;
        vector<ll> a(n);cin>>a;
        vector<ll> m(n+1,0);    
        for(ll i=0;i<n;i++)m[a[i]]++;
        ll cnt=0;
        for(ll i=0;i<n+1;i++){
            cnt+=cross[m[i]];
        }
        for(ll i=n-1;i>=0;i--){
            for(ll j=i-1;j>=0;j--){
                if(a[i]<a[j])cnt++;
            }
        }
        cout<<cnt<<'\n';
    }
    return 0;
}