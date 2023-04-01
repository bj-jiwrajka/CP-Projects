#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin >> n;

   if (n == 0 or n == 1)
   {
      cout << "Not Prime" << endl;
   }
   else
   {
      bool chk = 0;
      for (int i = 2; i * i <= n; i++)
      {
         if (n % i == 0){
            cout << "Not Prime" << endl;
         chk = 1;
         break;
         }
      }
      if (chk == 0)
      {
         cout << "Prime" << endl;
      }
   }
}