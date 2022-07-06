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
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll up=0,lo=0,sp=0,di=0;
        for(ll i=0;i<n;i++){
            if(isupper(s[i]))up=1;
            if(islower(s[i]))lo=1;
            if(isdigit(s[i]))di=1;
            if(s[i] == '#' || s[i] == '@' || s[i] == '*' || s[i] == '&')sp=1;
        }
        if(up == 0)s.push_back('A');
        if(lo == 0)s.push_back('a');
        if(di == 0)s.push_back('1');
        if(sp == 0)s.push_back('&');
        if(s.size() < 7){
            ll sz=s.size();
            while(sz != 7){
                s.push_back('a');
                sz++;
            }
        }
        cout<<s<<'\n';
    }
    return 0;
}