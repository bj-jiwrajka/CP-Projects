// Name-Bijay Jiwrajka
// Scholar id -2112055
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long int s;
    cin >> n >> s;
    int arr[n];
    int brr[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> brr[i];
    }
    int cnt = 0;
    int max =0;

    int i=1;
    while (s != 0)
    {
        arr[i] = brr[1];
        i++;
        s--;
    }

    for (int i = 1; i <= n; i++)
    {
        if (arr[i] == brr[i])
        {
            cnt++;
            if (cnt > max)
            {
                max = cnt;
            }
        }
        else
        {
            cnt = 0;
        }
    }
    cout << max << endl;

    return 0;
}
