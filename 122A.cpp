#include <bits/stdc++.h>
using namespace std;

int searchResult(std::vector<int> arr, int k)
{
    std::vector<int>::iterator it;
    it = std::find(arr.begin(), arr.end(), k);
    return (it - arr.begin());
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v1(n);
        vector<int> v2(n);
        for (int i = 0; i < n; i++)
        {

            cin >> v1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> v2[i];
        }
        long long int ans = 0;
       long long  int indexi;
        long long int min_index;
        for (int i = 0; i < n; i++)
        {

            min_index = *min_element(v2.begin(), v2.end());

            indexi = searchResult(v2, min_index);

            ans += v1[indexi];
            if (indexi >= 1)
            {
                v1[indexi - 1] += v2[indexi];
            }
            if (indexi < n - 1)
            {
                v1[indexi + 1] += v2[indexi];
            }

            v1.erase(v1.begin() + indexi);
            v2.erase(v2.begin() + indexi);
        }
        cout << ans << endl;
    }
    return 0;
}