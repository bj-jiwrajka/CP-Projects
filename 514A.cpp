#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   string s;
   cin >> s;

   if (s[0] == '1' or s[0] == '2' or s[0] == '3' or s[0] == '4' or s[0]=='9')
   {
      cout << s[0];
   }
   else
   {
      cout << '9' - s[0];
   }

   for (int i = 1; i < s.size(); i++)
   {
      if (s[i] == '0' or s[i] == '1' or s[i] == '2' or s[i] == '3' or s[i] == '4')
      {
         cout << s[i];
      }
      else
      {
         cout << '9' - s[i];
      }
   }
   cout << endl;
}