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
typedef long double lld;
bool isBeautiful(vector<ll> &arr)
{
    bool chk = 0;
    ll n = arr.size();
    ll i = 0;
    while (i + 1 < n and arr[i] <= arr[i + 1])
    {
        i++;
    }
    if (i == n - 1)
        return 1;
    i++;
    if (arr[i] > arr[0])
        return 0;
    while (i + 1 < n and arr[i] <= arr[0] and arr[i] <= arr[i + 1])
    {
        i++;
    }
    if (i == n - 1 and arr[i] <= arr[0])
        return 1;
    return 0;
}
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
        string s = "1";
        vector<ll> ans;
        bool chk = 0;
        ans.pb(arr[0]);
        for (int i = 1; i < n; i++)
        {
            if (!chk)
            {
                if (arr[i] >= ans[ans.size() - 1])
                {
                    s += '1';
                    ans.pb(arr[i]);
                }
                else if(arr[i]<=ans[0])
                {
                    chk = 1;
                    s += '1';
                    ans.pb(arr[i]);
                }
                else{
                    s+='0';
                }
            }
            else if (chk)
            {
                if (arr[i] >= ans[ans.size() - 1] and arr[i]<=ans[0])
                {
                    s += '1';
                    ans.pb(arr[i]);
                }
                else
                {
                    s += '0';
                }
            }
        }
        cout << s << endl;
    }
}