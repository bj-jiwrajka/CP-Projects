#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n;
    cin >> t;

    while (t--)
    {
        cin >> n;
        long long int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        long long int ans=arr[0];
        for (int i = 0; i < n; i++)
        {
            ans=__gcd(arr[i],ans);
        }
        long long int cnt=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]!=ans)
        {
         cnt++;
        }
        
    }
    cout<<cnt<<endl;
    
    }
}