#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int cnt0 = 0, cnt1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                cnt0++;
            }
            else
            {
                cnt1++;
            }
        }
        int ans = 0;
        if (cnt0 >= cnt1)
        {
            cout << cnt1 << endl;
        }
        else
        {
            ans = cnt0;
            int p = n - 2 * ans;
            cout << ans + (p / 3) << endl;
        }
    }
    return 0;
}