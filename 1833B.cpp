#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;

        vector<int> b(n);
        vector<pair<int, int>> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].first;
            a[i].second = i;
        }
        for (int i = 0; i < n; i++)
            cin >> b[i];

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        vector<int> result(n);

        for (int i = 0; i < n; i++)
        {
            int index = a[i].second;
            // cout<<index<<" ";
            result[index] = b[i];
        }

        for (int i = 0; i < n; i++)
            cout << result[i] << " ";
        cout << endl;
    }

    return 0;
}
