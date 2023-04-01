#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
       long long int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];     
              }

        long long int sum=0;
        for (int i = 0; i < n; i++)
        {
        sum+=arr[i];
        }
        
        cout<<sum*(sum-1)<<endl;
    }
    return 0;
}
        