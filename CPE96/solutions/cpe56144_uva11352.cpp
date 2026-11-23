// CPE 56144 | UVa 11352 | Crazy King
#include <bits/stdc++.h>

using namespace std;

int main() {
    const int kr[] = {-2,-2,-1,-1,1,1,2,2}, kc[] = {-1,1,-2,2,-2,2,-1,1};
    int tests; cin >> tests;
    while (tests--) {
        int rows,cols; cin >> rows >> cols;
        vector<string> grid(rows);
        for (auto &line : grid) cin >> line;
        const auto inside = [&](int r,int c) {
            return r >= 0 && r < rows && c >= 0 && c < cols;
        };
        pair<int,int> start{}, destination{};
        for (int r = 0; r < rows; ++r) {
            for (int c = 0; c < cols; ++c) {
                if (grid[r][c] == 'A') start={r,c};
                if (grid[r][c] == 'B') destination={r,c};
                if (grid[r][c] != 'Z') continue;
                for (int i = 0; i < 8; ++i) {
                    int y=r+kr[i], x=c+kc[i];
                    if (inside(y,x) && grid[y][x]=='.') grid[y][x]='#';
                }
            }
        }
        vector<vector<int>> distance(rows,vector<int>(cols,-1));
        queue<pair<int,int>> pending;
        distance[start.first][start.second]=0;
        pending.push(start);
        while (!pending.empty()) {
            auto [r,c]=pending.front();
            pending.pop();
            if (make_pair(r,c)==destination) break;
            for (int dr = -1; dr <= 1; ++dr)
                for (int dc = -1; dc <= 1; ++dc) {
                    int y=r+dr, x=c+dc;
                    if (!inside(y,x) || distance[y][x]!=-1) continue;
                    if (grid[y][x]=='Z' || grid[y][x]=='#') continue;
                    distance[y][x]=distance[r][c]+1;
                    pending.emplace(y,x);
                }
        }
        int result=distance[destination.first][destination.second];
        if (result < 0) cout << "King Peter, you can't go now!\n";
        else cout << "Minimal possible length of a trip is " << result << '\n';
    }
}
