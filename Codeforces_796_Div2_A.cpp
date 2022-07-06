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
        ll x;
        cin>>x;
        // vector<ll> bx,by;
        // ll cnt=1;
        // while(cnt<=x){
        //     if(x & cnt)bx.push_back(1);
        //     else bx.push_back(0);
        //     cnt*=2;
        // }
        // // reverse(all(bx));
        // if(bx[0] == 1)by.push_back(1);
        // if(bx[0] == 0)by.push_back(0);
        // if(bx[1] == 1)by.push_back(0);
        // if(bx[1] == 0)by.push_back(1);
        if(x == 1 || x == 2)cout<<"3\n";
        else if(x%2==1 && x>=3)cout<<"1\n";
        else{
            ll cnt=1;
            while(cnt<=x){
                if(cnt&x)break;
                cnt*=2;
            }
            // cout<<cnt<<'\n';
            // ll ans=power(2,cnt-1);
            if(ceil(log2(x)) == floor(log2(x)))cnt++;
            cout<<cnt<<'\n';
        }
    }
    return 0;
}
