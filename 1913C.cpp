#include <iostream>
#include <unordered_set>
using namespace std;

// Recursive function to generate distinct non-empty strings
void generateStrings(string s, unordered_set<string> &distinctStrings)
{
    if (s.size() == 1)
    {
        distinctStrings.insert(s);

        return;
    }

    distinctStrings.insert(s);

    generateStrings(s.substr(1), distinctStrings);

    generateStrings(s.substr(0, 1) + s.substr(2), distinctStrings);
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        unordered_set<string> distinctStrings;

        generateStrings(s, distinctStrings);

        cout << distinctStrings.size() << endl;
    }

    return 0;
}
