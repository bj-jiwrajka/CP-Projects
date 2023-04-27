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
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll arr[26] = {0};
        for (int i = 0; i < n; i++)
        {
            arr[int(s[i]) - 97]++;
        }
        // for (int i = 0; i < 26; i++)
        // {
        //     cout << arr[i] << " ";
        // }
        // cout << endl;
        char an;
        for (int i = 0; i < 26; i++)
        {
            if (arr[i] > 0)
            {
                cout << char(i + 97);
                an = char(i + 97);
                break;
            }
        }
        ll ind;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == an)
            {
                ind = i;
                break;
            }
        }
        for (int i = 0; i < ind; i++)
        {
            cout << s[i];
        }
        for (int i = ind + 1; i < n; i++)
        {
            cout << s[i];
        }
        cout << endl;
    }
}