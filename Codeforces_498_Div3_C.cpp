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

    ll n;
    cin>>n;
    vector<ll> a(n);cin>>a;
    vector<ll> prefix(n),suffix(n);
    prefix[0]=a[0];
    suffix[n-1]=a[n-1];
    for(ll i=1;i<n;i++)prefix[i]=prefix[i-1]+a[i];
    for(ll i=n-2;i>=0;i--)suffix[i]=suffix[i+1]+a[i];
    // for(ll i=0;i<n;i++)cout<<prefix[i]<<" ";
    // cout<<'\n';
    // for(ll i=0;i<n;i++)cout<<suffix[i]<<" ";
    // cout<<'\n';
    ll ans=0;
    for(ll i=0;i<n;i++){
        ll sum=prefix[i];
        ll l=i+1,h=n-1;
        while(l<=h){
            ll mid=l+(h-l)/2;
            if(suffix[mid] == sum){
                ans=max(ans,suffix[mid]);
                break;
            }
            else if(suffix[mid]<sum)h=mid-1;
            else l=mid+1;
        }
    }
    cout<<ans<<'\n';
    return 0;
}