#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long int arr[n];
    long long int brr[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> brr[i];
    }
    long long int ans = 0;
    long long int max = INT_MIN;
    int index=0;
    for (int i = n; i >= 1; i--)
    {
        ans = brr[i] - arr[i];
        if (ans>=max)
        {
            max = ans;
            index=i;
        }
    }
    cout <<index<< endl;
}