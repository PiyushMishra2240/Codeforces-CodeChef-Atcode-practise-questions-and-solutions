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
    vector<ll> a(n);
    cin>>a;
    ll ans=INF;
    map<ll,ll> m;
    for(ll i=0;i<n;i++)m[a[i]]++;
    if(is_sorted(all(a)) && m.size() == n)cout<<n-1<<'\n';
    else{
        for(ll i=n-2;i>=1;i--){
            ll cnt=0;
            ll nt=0;
            for(ll j=i-1;j>=0;j--){
                if(a[j]>nt){
                    cnt++;
                    nt=a[j];
                }
                else{
                    ll q=nt/a[j]+1;
                    cnt+=q;
                    nt=a[j]*q;
                }
            }
            nt=0;
            for(ll j=i+1;j<n;j++){
                if(a[j]>nt){
                    cnt++;
                    nt=a[j];
                }
                else{
                    ll q=nt/a[j]+1;
                    cnt+=q;
                    nt=a[j]*q;
                }
            }
            ans=min(ans,cnt);
        }
    cout<<ans<<'\n';
    }
    return 0;
}