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
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll x;
        cin >> x;
        ll cnt = 0;
        string p = s;
        map<string, ll> st;
        vector<string> mn = {"00:00", "11:11", "22:22", "01:10", "12:21", "21:12", "10:01", "02:20", "20:02", "03:30", "04:40", "05:50", "23:32", "15:51", "14:41", "13:31"};
        ll a = s[0] - 48;
        ll b = s[1] - 48;
        ll c = s[3] - 48;
        ll d = s[4] - 48;
        ll mnu = a * 10;
        mnu += b;
        mnu *= 60;
        mnu += c * 10;
        mnu += d;
        // mnu+=x;
        while (!st[s])
        {
            mnu += x;
            ll hr = mnu / 60;
            ll min = mnu % 60;
            string ans = "";
            ans += to_string(hr);
            ans += ":";
            ans += to_string(min);
            if (ans[1] == ':')
            {
                ans = "0" + ans;
            }
            if (ans.size() == 4)
            {
                char c = ans[3];
                ans[3] = '0';
                ans += c;
            }

            if (ans[3] >= '6' and ans[4] >= '0')
            {
                ans[3] -= 6;
                ans[4] -= 0;
                ans[1]++;
            }
            if (ans[0] >= '2' and ans[1] >= '4')
            {
                ans[0] -= 2;
                ans[1] -= 4;
            }
            st[ans] = 1;
            s = ans;
        }
        for (auto i : st)
        {
            fr(j, 16)
            {
                if (i.first == mn[j])
                {
                    cnt++;
                    break;
                }
            }
        }
        // cout << s << endl;
        cout << cnt << endl;
    }
}