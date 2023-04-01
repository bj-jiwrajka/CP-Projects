#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll num;
        cin >> num;
        ll power = 1e9 + 7;
//         ll a = (n * n - 1);
//         ll b1 = ((n * a)/ 3);
//         ll b=b1*2022;
// cout<<b1<<endl;



     ll answerm= ((num*(num+1))%power);
//         ll c = (n * (n + 1)) % power;
//         ll d = (c * (2 * n + 1) % power);
//         ll e = (2022 * (d / 6)) % power;
//         ll f = (e + b)%power;
int v1=1348;
     ll mode_ka_answerm= (v1*num-337+power)%power;
     answerm= (answerm*mode_ka_answerm)%power;
    cout<<answerm<<endl;
        // cout << f<< endl;
    }
}