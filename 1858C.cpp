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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<bool> v(n + 1, 0);
        cout << 1 << " ";
        for (int i = 2; i <= n; i++)
        {
            int num = i;
            while (num <= n and v[num] == 0)
            {
                cout << num << " ";
                v[num] = 1;
                num *= 2;
            }
        }

        cout << endl;
    }
}