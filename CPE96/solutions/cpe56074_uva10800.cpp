// CPE 56074 | UVa 10800 | Not That Kind of Graph
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tests; cin >> tests;
    for (int tc = 1; tc <= tests; ++tc) {
        string movement; cin >> movement;
        int height = 0;
        map<int,string,greater<int>> graph;
        for (size_t i = 0; i < movement.size(); ++i) {
            char step = movement[i];
            if (step == 'F') --height;
            auto &row = graph[height];
            row.resize(i, ' ');
            row += step == 'R' ? '/' : (step == 'F' ? '\\' : '_');
            if (step == 'R') ++height;
        }
        cout << "Case #" << tc << ":\n";
        for (const auto &[y, row] : graph) cout << "| " << row << '\n';
        cout << '+' << string(movement.size()+2, '-') << "\n\n";
    }
}
