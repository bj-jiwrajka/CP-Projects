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
void modBigNumber(string num, ll m)
{
    vector<int> vec;
    ll mod = 0;
    for (int i = 0; i < num.size(); i++)
    {

        int digit = num[i] - '0';
        mod = mod * 10 + digit;
        mod = mod % m;
    }

    cout << mod << "\n";
    return;
}
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

        ll m = 20;
        modBigNumber(s, m);
    }
}