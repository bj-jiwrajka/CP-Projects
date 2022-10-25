#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int c;
        cin>>c;
        int a = log2(c) + 1;
        int i = pow(2, a) - 1;
        int b;
        long long int max = INT_MIN;
        while (i > 0)
        {
            b = i ^ c;
            if (b*i > max)
            {
                max = b*i;
            }

            i--;
        }
        cout << max << endl;
    }
    return 0;
}