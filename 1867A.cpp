#include <bits/stdc++.h>

using namespace std;

long getSubarraySum(vector<int> &start, int n, int d)
{
    sort(start.begin(), start.end());
    int lo = 1;
    int hi = 1e8;
    while (lo < hi)
    {
        int mid = hi - (hi - lo) / 2;
        for (int i = 1; i < n; i++)
        {
            if (start[i - 1] + mid > start[i] + d)
            {
                mid = hi - 1;
                break;
            }
            else
            {
                mid = lo + 1;
            }
        }
    }

    return lo;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int d;
    cin >> d;
    long result = getSubarraySum(arr, n, d);
    cout << result << endl;

    return 0;
}