// Name - Bijay Jiwrajka
// Scholar ID - 2112055
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
ll sum_of_digits(ll n)
{
    ll sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<ll> v(2e5+100, 1);
    fr(i, 2e5+100)
    {
        if (i)
        {
            v[i] = v[i - 1] + sum_of_digits(i+1);
        }
    }
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cout << v[n - 1] << endl;
    }
}