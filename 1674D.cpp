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
#define inp(v)
#define all(x) (x).begin(), (x).end()
bool isSorted(vector<ll> arr)
{
    ll n = arr.size();
    fr(i, n - 1)
    {
        if (arr[i] > arr[i + 1])
            return false;
    }
    return true;
}
void swap(ll &a, ll &b)
{
    ll temp = a;
    a = b;
    b = temp;
}
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
        vector<ll> arr(n, 0);
        fr(i, n)
        {
            cin >> arr[i];
        }
        if (n & 1)
        {
            fr(i, n - 1)
            {
                if (i & 1 and arr[i] > arr[i + 1])
                {
                    swap(arr[i], arr[i + 1]);
                }
            }
        }
        else
        {
            fr(i, n - 1)
            {
                if (i %2==0 and arr[i] > arr[i + 1])
                {
                    swap(arr[i], arr[i + 1]);
                }
            }
        }
        if (isSorted(arr))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}