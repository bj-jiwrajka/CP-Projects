// ----------not done------------
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll p = n;
        vector<int> v;
        for (int i = 2; i * i < n; i++)
        {
            if (n % i == 0)
            {
                v.push_back(i);
                n = n / i;
            }
        }
        ll prod = 1;
        if (v.size() != 2)
        {
            cout << -1 << endl;
        }
        else
        {

            for (auto it : v)
            {
                cout << it << " ";
                prod *= it;
            }
            cout << p / prod << endl;
        }
    }
}