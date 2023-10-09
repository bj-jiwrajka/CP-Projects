// JAI SHREE GANESH
#include <bits/stdc++.h>
// #include<appiness.h>
using namespace std;
#define md 1000000007
#define pb push_back
#define ll long long
#define take(a) \
    ll a;       \
    cin >> a;
#define fr(i, n) for (ll i = 0; i < n; i++)
#define all(x) (x).begin(), (x).end()
typedef long double lld;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll a, b;
    cin >> a >> b;
    if ((a&1 and b&1 and (b-a)%4==0) or (a%2==0 and b%2==0 and (b-a)%4!=0) or (a&1 and b%2==0 and (b-a)%4==1) or (a%2==0 and b&1 and (b-a)%4==1))
        cout << "odd" << endl;
    else
        cout << "even" << endl;
}