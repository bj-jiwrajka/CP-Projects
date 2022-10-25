#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
   int p,q,r,s,t,u;
   p=a+b+c;
   q=a*b*c;
   r=(a+b)*c;
   s=a+(b*c);
   t=a*(b+c);
   u=(a*b)+c;
   int arr[6]={p,q,r,s,t,u};
   cout<<*max_element(arr,arr+6);
   
    return 0;
}