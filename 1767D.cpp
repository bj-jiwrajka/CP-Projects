#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    ll c = 0;
    ll d = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            d++;
        }
        else
        {
            c++;
        }
    }
    for (int i = pow(2, d); i <= pow(2, n) - pow(2, c) + 1; i++)
    {
        cout << i << " ";
    }
}