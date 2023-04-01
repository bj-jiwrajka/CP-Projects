#include<iostream>
#include <bits/stdc++.h>
#include<algorithm>
#include<limits.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;long long x; 
        cin>>n>>q;
        int a[64][n];
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>x;
            arr[i]= x;

        }
        for(int i=0; i<64; i++)
        {
            long long count=0;
            long long x= 1ll<<i;
            for(int j=0; j<n; j++)
            {
                if((arr[i]&x)) count++;
                a[i][j]= count;
            }

        }

        while(q--)
        {
            int l1,r1,l2,r2,k;
            cin>>k>>l1>>r1>>l2>>r2;
            l1--;
            l2--;
            //r1--;
            //r2--;
            cout<<(a[k][r2]- a[k][l2])-(a[k][r1]-a[k][l1])<<endl;

        }
    }
  return 0;
}