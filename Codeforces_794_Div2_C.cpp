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
        vector<ll> a(n);cin>>a;
        if(n%2 == 1){
            cout<<"NO\n";
            continue;
        }
        bool flag=true;
        map<ll,ll> m;
        for(ll i=0;i<n;i++)m[a[i]]++;
        for(auto itr=m.begin();itr!=m.end();itr++){
            if(itr->second>n/2){
                flag=false;
                break;
            }
        }
        if(flag){
            sort(all(a));
            bool f=true;
            for(ll i=1;i<=n/2-1;i++){
                if(a[i] == a[i+n/2-1]){
                    f=false;
                    break;
                }
            }
            if(f){
                cout<<"YES\n";
                vector<ll> ans;
                for(ll i=0;i<n/2;i++){
                    ans.push_back(a[i]);
                    ans.push_back(a[(n/2+i)]);
                }
                cout<<ans<<'\n';
            }
            else cout<<"NO\n";
        }
        else cout<<"NO\n";
    } 
    return 0;
}