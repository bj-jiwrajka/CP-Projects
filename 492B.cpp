#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    long long int l;
    cin >> n >> l;
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    long double max_diff = 0;
    long double diff = 0;
    for (int i = 0; i < n - 1; i++)
    {
        diff = arr[i + 1] - arr[i];
        if (diff > max_diff)
        {
            max_diff = diff;
        }
    }
    long double beginelem = arr[0];
    max_diff /= 2;
    long long last_diff = l - arr[n - 1];
    if (max_diff >= last_diff and max_diff >= beginelem)
    {
        cout << fixed << setprecision(10) << max_diff << endl;
    }
    else if (last_diff >= max_diff and last_diff >= beginelem)
    {
        cout << fixed << setprecision(10) << last_diff << endl;
    }
    else
    {
        cout << fixed << setprecision(10) << beginelem << endl;
    }
    return 0;
}