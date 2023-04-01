#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll alice = 0;
        ll bob = 0;
        for (int i = 0; i < n; i++)
        {
            
            if (arr[i] % a == 0)
            {
                bob++;
            }
           else if (arr[i] % b == 0)
            {
                alice++;
            }

        }
        if (bob<= alice)
        {
            cout << "ALICE" << endl;
        }
        else
        {
            cout << "BOB" << endl;
        }
    }
    return 0;
}