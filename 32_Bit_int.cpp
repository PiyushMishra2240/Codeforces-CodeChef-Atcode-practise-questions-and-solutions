#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
         freopen("input.txt","r",stdin);
         freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);
    cin.tie(0);

    int32_t num;
    cin>>num;
    int32_t sign = 1;
    if(num < 0)
        sign = -1;
    int32_t ans=0;
    int i = 0,f=0;
    num = abs(num);
    while (num)
    {
        int t = num%10;
        cout<<t<<' ';
        if(i < 1)
        ans = ans*pow(10,i) + t;
        else
        ans = ans*10 + t;
        if(ans < (-1*pow(2,31)) || ans > (pow(2,31)-1))
        {
            cout<<"0";
            f=1;
            break;
        }
        num /= 10;
        i++;
    }
    if(f == 0)
    cout<<sign*ans;
    return 0;
}