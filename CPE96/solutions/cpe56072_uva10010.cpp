// CPE 56072 | UVa 10010 | Where's Waldorf?
#include <bits/stdc++.h>

using namespace std;

void lower(string &word) {
    for (char &c : word) c = tolower(static_cast<unsigned char>(c));
}
bool matches(const vector<string> &grid, const string &word, int r, int c) {
    const int rows = grid.size(), cols = grid[0].size();
    for (int dr = -1; dr <= 1; ++dr)
        for (int dc = -1; dc <= 1; ++dc) {
            if (!dr && !dc) continue;
            int y=r, x=c;
            size_t i=0;
            for (; i < word.size(); ++i, y+=dr, x+=dc) {
                if (y < 0 || y >= rows || x < 0 || x >= cols || grid[y][x] != word[i]) break;
            }
            if (i == word.size()) return true;
        }
    return false;
}
int main() {
    int tests; cin >> tests;
    while (tests--) {
        int rows,cols; cin >> rows >> cols;
        vector<string> grid(rows);
        for (auto &row : grid) { cin >> row; lower(row); }
        int queries; cin >> queries;
        while (queries--) {
            string word; cin >> word; lower(word);
            bool found = false;
            for (int r = 0; r < rows && !found; ++r)
                for (int c = 0; c < cols; ++c) if (matches(grid, word, r, c)) {
                    cout << r+1 << ' ' << c+1 << '\n';
                    found = true;
                    break;
                }
        }
        if (tests) cout << '\n';
    }
}
