#include <bits/stdc++.h>
using namespace std;
int main()
{
   
        int n;
        cin>>n;
        long long int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        reverse(arr, arr + n);
      
        
        vector<int> v;
        for (int i = 1; i <= n; i++)
        {
            v.push_back(i * arr[i-1]);
        }

        cout << *max_element(v.begin(), v.end()) << endl;
    }
