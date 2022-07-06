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

    ll q;
    cin>>q;
    while(q--){
        ll n;
        cin>>n;
        string s,t;
        cin>>s>>t;
        if(s == t){
            cout<<"YES\n";
            continue;
        }
        if(n == 1){
            if(s == t)cout<<"YES\n";
            else cout<<"NO\n";
            continue;
        }
        map<char,ll> ms,mt;
        for(ll i=0;i<n;i++){
            ms[s[i]]++;
            mt[t[i]]++;
        }
        if(ms != mt){
            cout<<"NO\n";
            continue;
        }
        if(n == 2){
            if(s != "ba" && s != "cb")cout<<"YES\n";
            else cout<<"NO\n";
            continue;
        }
        bool flag=true;
        for(ll i=0;i<n;i++){
            if(i+1<n && i-1>=0 && i+2<n){
                if(s[i] == 'c' && s[i+1] == 'b'){
                    if(s[i-1] != 'b' && s[i+2] != 'c'){
                        if(s[i] != t[i] && s[i+1] != t[i+1]){
                            flag=false;
                            break;
                        }
                    }
                }
            }
            else if(i+1<n && i-1>=0 && i+2 == n){
                if(s[i] == 'c' && s[i+1] == 'b'){
                    if(s[i-1] != 'b'){
                        if(s[i] != t[i] && s[i+1] != t[i+1]){
                            flag=false;
                            break;
                        }
                    }
                }
            }
        }
        for(ll i=0;i<n;i++){
            if(i+1<n && i-1>=0 && i+2<n){
                if(s[i] == 'b' && s[i+1] == 'a'){
                    if(s[i-1] != 'a' && s[i+2] != 'b'){
                        if(s[i] != t[i] && s[i+1] != t[i+1]){
                            flag=false;
                            break;
                        }
                    }
                }
            }
            else if(i+1<n && i-1>=0 && i+2 == n){
                if(s[i] == 'b' && s[i+1] == 'a'){
                    if(s[i-1] != 'a'){
                        if(s[i] != t[i] && s[i+1] != t[i+1]){
                            flag=false;
                            break;
                        }
                    }
                }
            } 
        }
        for(ll i=0;i<n;i++){
            if(i+1<n && i-1>=0 && i+2<n){
                if(s[i] == 'c' && s[i+1] == 'a'){
                    if(s[i-1] != 'b' && s[i+2] != 'b'){
                        if(s[i] != t[i] && s[i+1] != t[i+1]){
                            flag=false;
                            break;
                        }
                    }
                }
            }
            else if(i+1<n && i-1>=0 && i+2 == n){
                if(s[i] == 'c' && s[i+1] == 'a'){
                    if(s[i-1] != 'b'){
                        if(s[i] != t[i] && s[i+1] != t[i+1]){
                            flag=false;
                            break;
                        }
                    }
                }
            }
        }
        if(flag)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}