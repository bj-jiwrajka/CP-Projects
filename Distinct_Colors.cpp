#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n;
    cin >> t;
  
    while (t--)
    {
        cin>>n;
            long long int max=INT_MIN;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
      
       for (int i = 0; i < n; i++)
       {
    if (arr[i]>max)
    {
        max=arr[i];
    }
    
       }
       
        cout<<max<<endl;
    }
    return 0;
}
        