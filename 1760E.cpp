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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int brr[n];
        for (int i = 0; i < n; i++)
        {
            brr[i] = arr[i];
        }
        int crr[n];
        for (int i = 0; i < n; i++)
        {
            crr[i] = arr[i];
        }

        int index = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                index = i;
                break;
            }
        }

        arr[index] = 1;

        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
            {
                cnt++;
            }
        }

        int count0 = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] == 0)
            {
                int a = cnt;
                while (a != 0)
                {
                    count0++;
                    a--;
                }
            }
            else
            {
                cnt--;
            }
        }
        int indexlast;
        for (int i = n - 1; i >= 0; i++)
        {
            if (brr[i] == 1)
            {
                indexlast = i;
                break;
            }
        }
        brr[indexlast] = 0;
        int cnt2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (brr[i] == 1)
            {
                cnt2++;
            }
        }

        int count02 = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (brr[i] == 0)
            {
                int b = cnt2;
                while (b != 0)
                {
                    count02++;
                    b--;
                }
            }
            else
            {
                cnt2--;
            }
        }

        int cnt3 = 0;
        for (int i = 0; i < n; i++)
        {
            if (crr[i] == 1)
            {
                cnt3++;
            }
        }

        int count03 = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (crr[i] == 0)
            {
                int c = cnt3;
                while (c != 0)
                {
                    count03++;
                    c--;
                }
            }
            else
            {
                cnt3--;
            }
        }

        // cout << count0 << " " << count02 << " " << count03 << endl;

        if (count0 >= count02 and count0 >= count03)
        {
            cout << count0 << endl;
        }
        else if (count02 >= count0 and count02 >= count03)
        {
            cout << count02 << endl;
        }
        else
        {
            cout << count03 << endl;
        }
    }
}
