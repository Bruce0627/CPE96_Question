// CPE 56082 | UVa 10409 | Die Game
#include <bits/stdc++.h>

using namespace std;

int main() {
    for (int steps; cin >> steps && steps; ) {
        int top=1, north=2, west=3;
        while (steps--) {
            string direction; cin >> direction;
            int previousTop = top;
            if (direction == "north") { top = 7-north; north = previousTop; }
            if (direction == "south") { top = north; north = 7-previousTop; }
            if (direction == "east") { top = west; west = 7-previousTop; }
            if (direction == "west") { top = 7-west; west = previousTop; }
        }
        cout << top << '\n';
    }
}
