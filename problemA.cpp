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
        ll n;
        cin >> n;
        string s;
        cin >> s;
        stack<char> st;
        ll cnt = 0;
        fr(i, n)
        {
            if (st.empty())
            {
                st.push(s[i]);
            }
            else if (st.top() == '<' and s[i] == '>')
            {
                cnt+=st.size();
                st.push(s[i]);
                break;
            }
            else
            {
                st.push(s[i]);
            }
        }
        cout << cnt << endl;
    }
}