#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int md = 1e9 + 7;

int main()
{
    vector<ll> pre(1e6 + 1, 0);
    pre[0] = 1;
    for (int i = 1; i < 1000000; i++)
    {
        pre[i] = (i * pre[i - 1]) % md;
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long int arr[n];
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum = (sum + pre[(arr[i])]) % md;
        }
        cout << sum << endl;
    }
    return 0;
}