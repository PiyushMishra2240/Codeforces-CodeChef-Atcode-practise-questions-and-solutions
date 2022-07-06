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
        ll n;
        cin>>n;
        vector<ll> a(n),b(n);cin>>a;cin>>b;
        if(n == 1 && a[0] >= b[0]){
            cout<<"YES\n";
            continue;
        }
        if(n == 1 && a[0] < b[0]){
            cout<<"NO\n";
            continue;
        }
        vector<ll> d(n);
        for(ll i=0;i<n;i++)d[i]=a[i]-b[i];
        ll f=0;
        for(ll i=0;i<n;i++){
            if(d[i]<0){
                f=1;
                break;
            }
        }
        if(f == 1){
            cout<<"NO\n";
            continue;
        }
        ll mx=INT_MIN;
        for(ll i=0;i<n;i++){
            mx=max(mx,d[i]);
        }
        for(ll i=0;i<n;i++){
            if(a[i]-mx >= 0)a[i]-=mx;
            else a[i]=0;
        }
        bool flag=true;
        for(ll i=0;i<n;i++){
            if(a[i] != b[i]){
                flag=false;
                break;
            }
        }
        if(flag)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}