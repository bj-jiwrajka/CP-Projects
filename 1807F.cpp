#include <iostream>
#include <string>
using namespace std;

// function to simulate the movement of the ball in the grid
int simulate(int n, int m, int i1, int j1, int i2, int j2, string direction) {
    // initialize the ball's position, direction, and bounce count
    int i = i1, j = j1;
    int di = (direction == "DR" || direction == "UR") ? 1 : -1;
    int dj = (direction == "DR" || direction == "DL") ? 1 : -1;
    int bounces = 0;
    
    // simulate the ball's movement
    while (i != i2 || j != j2) {
        // calculate the next position of the ball
        int ni = i + di, nj = j + dj;
        
        // check if the ball hits a wall
        if (ni < 1 || ni > n || nj < 1 || nj > m) {
            // update the direction of the ball based on the type of bounce
            if (ni < 1 && nj < 1) {
                di = 1; dj = 1;
            } else if (ni < 1 && nj > m) {
                di = 1; dj = -1;
            } else if (ni > n && nj < 1) {
                di = -1; dj = 1;
            } else if (ni > n && nj > m) {
                di = -1; dj = -1;
            } else if (ni < 1 || ni > n) {
                di = -di;
            } else if (nj < 1 || nj > m) {
                dj = -dj;
            }
            bounces++;
        }
        
        // move the ball to the next position
        i += di; j += dj;
        
        // check if the ball cannot continue moving
        if (i < 1 || i > n || j < 1 || j > m) {
            return -1;
        }
    }
    
    return bounces;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, i1, j1, i2, j2;
        string direction;
        cin >> n >> m >> i1 >> j1 >> i2 >> j2 >> direction;
        int ans = simulate(n, m, i1, j1, i2, j2, direction);
        cout << ans << endl;
    }
    return 0;
}
