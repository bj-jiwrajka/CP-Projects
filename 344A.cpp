#include <iostream>
using namespace std;

long long get_points(long long n, long long w) {
    return 3 * w + (n - w);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, p;
        cin >> n >> p;

        long long lo = 0, hi = n;
        long long max_wins = -1, min_wins = -1;

        while (lo <= hi) {
            long long mid = (lo + hi) / 2;
            long long points = get_points(n, mid);

            if (points == p) {
                max_wins = mid;
                break;
            } else if (points < p) {
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }

        lo = 0, hi = n;

        while (lo <= hi) {
            long long mid = (lo + hi) / 2;
            long long points = get_points(n, mid);

            if (points == p) {
                min_wins = mid;
                break;
            } else if (points < p) {
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }

        if (max_wins == -1 || min_wins == -1 || max_wins < min_wins) {
            cout << -1 << endl;
        } else {
            cout << min_wins << " " << max_wins << endl;
        }
    }

    return 0;
}
