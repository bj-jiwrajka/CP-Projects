// Name - Bijay Jiwrajka
// Scholar ID - 2112055
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll a, b;
    cin >> a >> b;
    ll k = (b - a % b + 1);
    if (k == b)
        cout << b << endl;
    else
        cout << k % b << endl;
}