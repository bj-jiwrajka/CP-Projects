#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll arr[4];
        for (int i = 0; i < 4; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + 3);
        ll max = arr[2];
        ll min = arr[0];
        ll sum = 0;
        for (int i = 0; i < 4; i++)
        {
            sum += arr[i];
        }
        if (sum % 3 == 0 and arr[0] <= sum / 3 and arr[1] <= sum / 3 and arr[2] <= sum / 3)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}