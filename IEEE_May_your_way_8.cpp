#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int inf = -1000 * 1000 * 1000;

ll d[150][100][2], dmin[150][100][2];
ll n;
string s;

void setinf()
{
    for (ll i = 0; i < 150; i++)
        for (ll j = 0; j < 100; j++)
            for (ll m = 0; m < 2; m++)
            {
                d[i][j][m] = inf;
                dmin[i][j][m] = inf;
            }
}

void chill(ll i, ll j, ll mode, ll newval)
{
    if (d[i][j][mode] == inf)
        d[i][j][mode] = newval;
    if (dmin[i][j][mode] == inf)
        dmin[i][j][mode] = newval;
    d[i][j][mode] = max(d[i][j][mode], newval);
    dmin[i][j][mode] = min(dmin[i][j][mode], newval);
}

ll settempinf(ll val)
{
    if (val == inf)
        return 0;
    else
        return val;
}

int main()
{
    #ifndef ONLINE_JUDGE
         freopen("input.txt","r",stdin);
         freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    setinf();
    cin>>s;
    cin>>n;
    d[0][0][0] = 0;
    dmin[0][0][0] = 0;
    d[0][0][1] = inf;
    for (ll i = 0; i < s.length(); i++)
        for (ll j = 0; j <= n; j++)
            for (ll mode = 0; mode < 2; mode ++)
            {
                if (d[i][j][mode] != inf)
                    if (s[i] == 'F')
                    {
                        if (mode == 0)
                            chill(i + 1, j, mode, d[i][j][mode] + 1);
                        else
                            chill(i + 1, j, mode, d[i][j][mode] - 1);
                        chill(i + 1, j + 1, abs(mode - 1), d[i][j][mode]);
                    }
                    else
                    {
                        if (mode == 0)
                            chill(i + 1, j + 1, mode, d[i][j][mode] + 1);
                        else
                            chill(i + 1, j + 1, mode, d[i][j][mode] - 1);
                        chill(i + 1, j, abs(mode - 1), d[i][j][mode]);
                    }
                if (dmin[i][j][mode] != inf)
                    if (s[i] == 'F')
                    {
                        if (mode == 0)
                            chill(i + 1, j, mode, dmin[i][j][mode] + 1);
                        else
                            chill(i + 1, j, mode, dmin[i][j][mode] - 1);
                        chill(i + 1, j + 1, abs(mode - 1), dmin[i][j][mode]);
                    }
                    else
                    {
                        if (mode == 0)
                            chill(i + 1, j + 1, mode, dmin[i][j][mode] + 1);
                        else
                            chill(i + 1, j + 1, mode, dmin[i][j][mode] - 1);
                        chill(i + 1, j, abs(mode - 1), dmin[i][j][mode]);
                    }
            }
    ll res = 0;
    for (ll i = n; i >= 0; i-=2)
    {
        res = max(res, max(max(abs(settempinf(d[s.length()][i][0])), abs(settempinf(d[s.length()][i][1]))),
                max(abs(settempinf(dmin[s.length()][i][0])), abs(settempinf(dmin[s.length()][i][1])))));
    }
    cout<<res<<'\n';
    return 0;
}
