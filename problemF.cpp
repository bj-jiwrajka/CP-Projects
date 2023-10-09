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
    string s;
    cin >> s;
    ll n = s.size();
    stack<char> st;
    fr(i, n)
    {
        if (st.empty())
        {
            st.push(s[i]);
        }
        else
        {
            if (st.top() == s[i])
            {

                if (i + 1 < n and st.top() != s[i + 1] + 1)
                {
                    if (s[i + 1] + 1 <= 122)
                        st.push(s[i + 1] + 1);
                    else if (st.top() == 'a')
                        st.push('b');
                    else
                        st.push(st.top() - 1);
                }

                else if (i + 1 < n and st.top() == s[i + 1] + 1)
                {
                    if (s[i] + 1 <= 122)
                        st.push(s[i] + 1);
                    else
                        st.push('z');
                }
                else
                    st.push(s[i] + 1);
            }
            else
            {
                st.push(s[i]);
            }
        }
    }
    string ans = "";
    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }
    reverse(all(ans));
    cout << ans;
}