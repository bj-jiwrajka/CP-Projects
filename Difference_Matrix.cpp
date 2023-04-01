// Let's begin
#include <bits/stdc++.h>
// #include<appiness.h>
using namespace std;
#define md 1000000007
#define pb push_back
#define ll long long
#define fr(i, n) for (ll i = 0; i < n; i++)
#define inp(v)
#define all(x) (x).begin(), (x).end()
typedef long double lld;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        int matrix[n][n];

        // fill the matrix with numbers from 1 to n^2
        int num = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                matrix[i][j] = num;
                num++;
            }
        }
        int cnt = 0;

        // print the matrix with odd numbers first and then even numbers
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (matrix[i][j] % 2 != 0)
                { // odd number
                    cout << matrix[i][j] << " ";
                    cnt++;
                }
            }
            if (cnt == n)
            {
                cout << endl;
                cnt = 0;
            }
        }
        // int cnt2 = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (matrix[i][j] % 2 == 0)
                { // even number
                    cout << matrix[i][j] << " ";
                    cnt++;
                }
            }
            if (cnt == n)
            {
                cout << endl;
                cnt = 0;
            }
        }
    }
}