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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int ans = arr[0];
        sort(arr, arr + n);
        if (arr[0] == ans)
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Alice" << endl;
        }
    }
    return 0;
}
