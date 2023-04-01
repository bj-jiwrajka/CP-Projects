#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int cnt = 0;
    int even = 0;
    int ans;
    int abns;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] & 1)
        {
            cnt++;
            ans = i;
        }
        else
        {
            even++;
            abns = i;
        }
    }
    if (cnt == 1)
    {
        cout << ans + 1 << endl;
    }
    else if (even == 1)
    {
        cout << abns + 1 << endl;
    }

    return 0;
}
