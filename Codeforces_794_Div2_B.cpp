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
        ll cnt=0;
        for(ll i=0;i<n-1;i++){
            if(i+1<n && a[i]>a[i+1]){
                cnt++;
                i++;
            }
        }
        // cout<<pos<<'\n';
        // if(pos.size()>0)
        // if(pos[pos.size()-1] != n-1 || pos[pos.size()-1] != n-2){
        //     // cnt--;
        //     ll j=pos[pos.size()-1];
        //     while(j>=1){
        //         ll count=0;
        //         ll num1=a[j];
        //         ll num2=a[j-1];
        //         for(ll i=j+1;i<n;i++){
        //             if(num1>a[i])count++;
        //         }
        //         for(ll i=j;i<n;i++){
        //             if(num2>a[j])count++;
        //         }
        //         if(count%2==1 || cnt <= 0)break;
        //         else {
        //             cnt--;
        //             j--;
        //         }
        //     }
        // }
        // if(cnt == 0 && !is_sorted(all(a)))
        // cnt++;
        cout<<cnt<<'\n';
    }
    return 0;
}