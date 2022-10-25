#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, x, cnt = 0;
    cin >> n >> x;
    vector<int> v;
    for (int i = 1; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            v.push_back(i);
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] <= n and x / v[i] <= n)
        {
            cnt++;
        }
    }
    long long int p = sqrt(x);
    if (p * p == x and cnt!=0)
    {
        cout << 2 * cnt - 1 << endl;
    }
    else
    {

        cout << 2 * cnt << endl;
    }
    return 0;
}
