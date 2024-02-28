#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string add_large_numbers(string num) {
    __int128 total_sum = 0;
    __int128 current_number = 0;

    for (char digit : num) {
        current_number = current_number * 10 + (digit - '0');
        total_sum += current_number;
    }

    // Convert __int128 to string
    stringstream ss;
    ss << total_sum;
    string result;
    ss >> result;

    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    cin.ignore();

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        cin.ignore(); // To clear the newline character left in the buffer after reading n

        string s;
        getline(cin, s);

        cout << add_large_numbers(s) << endl;
    }

    return 0;
}
