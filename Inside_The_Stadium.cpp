// Let's begin
#include <bits/stdc++.h>
// #include<appiness.h>
using namespace std;
#define md 1000000007
#define pb push_back
#define ll float
#define fr(i, n) for (ll i = 0; i < n; i++)
#define inp(v)
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
        long long n;
        cin >> n;
        long long arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll cnt = 0;
        ll sum = 0;
        ll ans;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            ans = (sum * 100);
            ans = ans / (i + 1);
            if (ans == 100)
                cnt++;
        }
        cout << cnt << endl;
    }
}