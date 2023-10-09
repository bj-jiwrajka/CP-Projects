#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<vector<int>> matrix(n, vector<int>(n));
        for (int i = 0; i < n; ++i)
        {
            string s;
            cin >> s;
            for (int j = 0; j < n; ++j)
            {
                matrix[i][j] = s[j];
            }
        }

        int steps = 0;
        for (int i = n - 1; i >= 0; --i)
        {
            for (int j = n - 1; j >= 0; --j)
            {
                if (matrix[i][j] == 1)
                {
                    ++steps;
                    for (int x = 0; x <= i; ++x)
                    {
                        for (int y = abs(j - i); y < n; ++y)
                        {
                            matrix[x][y] = 1 - matrix[x][y];
                        }
                    }
                }
            }
        }

        cout << steps << endl;
    }

    return 0;
}
