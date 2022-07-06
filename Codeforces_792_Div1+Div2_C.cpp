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
        ll n,m;
        cin>>n>>m;
        ll a[n][m];
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++)cin>>a[i][j];
        }
        ll x=-1,y=-1;
        bool flag=false;
        for(ll i=0;i<n;i++){
            if(is_sorted(a[i],a[i]+m)){
                flag=true;
                break;
            }
        }
        ll cnt=0;
        ll p=-1,q=-1;
        ll f2=0;
        ll temp=0;
        for(ll i=0;i<n;i++){
            cnt=0;
            if(!is_sorted(a[i],a[i]+m)){
                ll tt[m];
                for(ll k=0;k<m;k++)tt[k]=a[i][k];
                sort(tt,tt+m);
                ll f=0;
                for(ll k=0;k<m;k++){
                    if(a[i][k] != tt[k] && f == 0){
                        p=k+1;
                        f=1;
                        cnt++;
                    }
                    else if(a[i][k] != tt[k] && f == 1){
                        q=k+1;
                        f=2;
                        cnt++;
                    }
                    else if(a[i][k] != tt[k] && f == 2){
                        cnt++;
                        break;
                    }
                }
            }
            if(x == -1 && y == -1){
                x=p;
                y=q;
            }
            else if(x != p || y != q){
                f2=1;
                break;
            }
            if(cnt>2){
                temp=100;
                break;
            }
        }
        if(temp == 100 || f2 == 1){
            cout<<"-1\n";
            continue;
        }
        if(flag && (x != -1 && y != -1)){
            ll g=0;
            for(ll i=0;i<n;i++){
                if(is_sorted(a[i],a[i]+m)){
                    if(a[i][x-1] != a[i][y-1]){
                        g=1;
                        break;
                    }
                }
            }
            if(g == 1)cout<<"-1\n";
            else cout<<x<<" "<<y<<'\n';
        }
        else
        {
            if(x == -1 && y == -1)
            cout<<"1 1\n";
            else
            cout<<x<<" "<<y<<'\n';
        }
    }
    return 0;
}