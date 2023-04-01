#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, s;
        cin >> m >> s;
        int arr[m];
        for (int i = 0; i < m; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + m);
        int max = arr[m - 1];
        int cnt = 0;
        int sum2 = 0;
        int total_sum = (max * (max + 1)) / 2;
        for (int i = 0; i < m; i++)
        {
            sum2 += arr[i];
        }
        int sum = total_sum - sum2;
        // cout<<sum<<endl;
        if (sum > s)
        {
            cout << "NO" << endl;
        }
        else if (sum == s)
        {
            cout << "YES" << endl;
        }
        else
        {
            s = s - sum;
            // cout << s << endl;
            if (s < 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                int j = 1;

                while (s > 0)
                {
                    s = s - max - j;
                    j++;
                }
                // cout<<max<<" "<<s<<endl;/
                if (s == 0)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
    }
}