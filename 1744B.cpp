#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        long long int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int k, x;
     

        long long int sum1 = 0, sum0 = 0;
        for (int i = 0; i < q; i++)
        {
            vector<int> v1;
            vector<int> v0;

               vector<pair<int, int>> v;
        for (int i = 0; i < q; i++)
        {

            cin >> k >> x;
            v.push_back({k, x});
        }
            for (int i = 0; i < n; i++)
            {
                if (arr[i] & 1)
                {
                    v1.push_back(arr[i]);
                }
                else
                {
                    v0.push_back(arr[i]);
                }
            }
            if (v[i].first == 0)
            {
                v0[i] += v[i].second;
            }
            else if (v[i].first == 1)
            {
                v1[i] += v[i].second;
            }
            sum0 = accumulate(v0.begin(), v0.end(), 0);
            sum1 = accumulate(v1.begin(), v1.end(), 0);

            cout << sum0 + sum1 << endl;
        }
    }
}