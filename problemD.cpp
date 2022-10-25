// Name-Bijay Jiwrajka
// Scholar id - 2112055
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int l, r;
        cin >> l >> r;

        vector<int> v;
        set<int> s;
      long long  int b = 1;
        for (int i = 0; i <= 10; i++)
        {

          long long  int c = 1;
            for (int j = 0; j <= 10; j++)
            {

              long long  int a = b * c;
                c *= 5;

                if (a >= l and a <= r)
                {
                    v.push_back(a);
                    s.insert(a);
                }
            }
            b *= 3;
        }
        for (int i = l; i <= r; i++)
        {
            v.push_back(i);
            s.insert(i);
        }

        cout << v.size() - s.size() << endl;
    }
}
