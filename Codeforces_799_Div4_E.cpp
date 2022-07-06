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
        ll n,s;
        cin>>n>>s;
        vector<ll> a(n);cin>>a;
        ll sum=accumulate(a.begin(),a.end(),0ll);
        if(sum<s){
            cout<<"-1\n";
            continue;
        }
        if(sum == s){
            cout<<"0\n";
            continue;
        }
        else{
            ll i=0,j=0;
            ll ans=0;
            ll ss=0;
            while(j<n){
                ss+=a[j];
                if(ss == s){
                    ans=max(ans,j-i+1);
                    j++;
                }
                else if(ss > s){
                    while(ss>s){
                        ss-=a[i];
                        i++;
                    }
                    ans=max(ans,j-i+1);
                    j++;
                }
                else j++;
            }
            if(ss == s) ans=max(ans,j-i);
            cout<<n-ans<<'\n';
        }
    }
    return 0;
}