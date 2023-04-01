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
        long long int arr[n];
        vector<long long int> v;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        v.push_back(arr[0]);
        for (int i = 1; i < n; i++)
        {
            if (arr[i] != arr[i - 1])
            {
                v.push_back(arr[i]);
            }
        }

        bool ans = 1;
        for (int i = 1; i < v.size() - 1; i++)
        {

            if (v[i] > v[i - 1] and v[i] > v[i + 1])
            {
                ans = 0;
                break;
            }
        }
        if (!ans)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}
