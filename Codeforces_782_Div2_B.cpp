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
        string s;
        cin>>s;
        vector<ll> a(n);
        ll tt=k;
        for(ll i=0;i<n;i++){
            if(tt<=0)break;
            if(k%2==1 && s[i] == '1'){
                tt--;
                a[i]=1;
            }
            else if(k%2 == 0 && s[i] == '0'){
                tt--;
                a[i]=1;
            }
        }
        ll sum=accumulate(a.begin(),a.end(),0ll);
        if(k-sum>0)a[n-1]+=k-sum;
        for(ll i=0;i<n;i++){
            if( (k-a[i])%2 == 1){
                if(s[i] == '1')s[i]='0';
                else s[i] = '1';
            }
        }
        cout<<s<<'\n'<<a<<'\n';
    }
    return 0;
}