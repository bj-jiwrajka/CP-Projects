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
        bool an = 1;

        vector<int> v(51, 0);
        for (int i = 0; i < n; i++)
        {
            int l, r;
            cin >> l >> r;
            if (l == r)
            {
                cout << "YES" << endl;
                an = 0;
                break;
            }
            for (int j = l; j <= r; j++)
            {
                v[j]++;
            }
        }
        bool loop = 1;
        int max = *max_element(v.begin(), v.end());

        if (an)
        {
            for (int i = 1; i <= v.size(); i++)
            {
                if (i != k and v[i] == max)
                {
                    cout << "NO" << endl;
                    loop = 0;
                    break;
                }
            }
            if (loop)
            {
                cout << "YES" << endl;
            }
        }
    }

    return 0;
}
