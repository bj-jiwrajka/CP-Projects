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
        vector<char> v1, v2;

        for (int i = 0; i < n; i++)
        {
            if (i & 1)
            {
                v2.push_back(s[i]);
            }
            else
            {
                v1.push_back(s[i]);
            }
        }
        bool loop = 0;
        for (int i = 0; i < v1.size(); i++)
        {
            for (int j = 0; j < v2.size(); j++)
            {
                if (v1[i] == v2[j])
                {

                    cout << "NO" << endl;
                    loop = 1;
                    break;
                }
            }
            if (loop)
            {

                break;
            }
        }
        if (!loop)
        {
            cout << "YES" << endl;
        }
    }
}