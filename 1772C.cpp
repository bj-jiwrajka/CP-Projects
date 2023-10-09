// Let's begin
#include <bits/stdc++.h>
// #include<appiness.h>
using namespace std;
#define md 1000000007
#define pb push_back
#define ll long long
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
        ll k;
        cin >> k;
        ll n;
        cin >> n;

        vector<ll> arr(k, 0);
        arr[0] = n;
        for (ll i = 1; i < k; i++)
        {
            if (arr[i - 1] - i > k - i - 1)
                arr[i] = arr[i - 1] - i;
            else
                break;
        }
        reverse(arr.begin(), arr.end());
        ll lu = 0;
        fr(i, k)
        {
            if (!arr[i])
            {
                arr[i] = 1 + lu;
                lu++;
            }
        }

        for (auto it : arr)
        {
            cout << it << " ";
        }
        cout << endl;
    }
}