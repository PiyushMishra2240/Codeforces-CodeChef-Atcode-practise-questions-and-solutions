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
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<ll> a(n);
        for(ll i=0;i<n;i++)cin>>a[i];
        vector<ll> bits(34,0);
        ll ans=0;
        for(ll i=0;i<n;i++){
            ll j=0,cnt=1;
            while(cnt<=a[i]){
                if(cnt & a[i]){
                    bits[j]++;
                }
                j++;
                cnt*=2;
            }
        }
        if(k == 0){
            ans=a[0];
            for(ll i=1;i<n;i++)ans&=a[i];
        }
        if(k != 0)
        for(ll i=30;i>=0;i--){
            if(k>0 && n-bits[i]<=k){
                ans+=power(2,i);
                k=k-(n-bits[i]);
            }
            else{
                if(bits[i]==n){
                    ans+=power(2,i);
                }
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}