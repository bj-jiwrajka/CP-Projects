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

string DecimalToBinary(int num)
{
    string str;
    while (num)
    {
        if (num & 1) // 1
            str += '1';
        else // 0
            str += '0';
        num >>= 1; // Right Shift by 1
    }
    reverse(str.begin(), str.end());
    return str;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int cnt = 0;
        if (n == 0)
        {
            cout << 1 << endl;
            continue;
        }

        string s = DecimalToBinary(n);
        // cout<<s<<endl;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
            {
                cnt++;
            }
        }
        cout <<pow(2,cnt)<< endl;
    }
}