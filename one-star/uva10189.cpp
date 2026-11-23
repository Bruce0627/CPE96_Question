// CPE 56071 | UVa 10189 | Minesweeper
#include <bits/stdc++.h>

using namespace std;

int main() {
    int field = 0;
    for (int rows,cols; cin >> rows >> cols && (rows || cols); ) {
        vector<string> grid(rows);
        for (auto &row : grid) cin >> row;
        if (field) cout << '\n';
        cout << "Field #" << ++field << ":\n";
        for (int r = 0; r < rows; ++r) {
            for (int c = 0; c < cols; ++c) {
                if (grid[r][c] == '*') { cout << '*'; continue; }
                int count = 0;
                for (int dr = -1; dr <= 1; ++dr)
                    for (int dc = -1; dc <= 1; ++dc) {
                        int y = r+dr, x = c+dc;
                        if (y >= 0 && y < rows && x >= 0 && x < cols)
                            count += grid[y][x] == '*';
                    }
                cout << count;
            }
            cout << '\n';
        }
    }
}
