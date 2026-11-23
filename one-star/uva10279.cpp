// UVa 10279 - Mine Sweeper
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<string> mines(n), clicks(n);
        for (auto &row : mines) cin >> row;
        for (auto &row : clicks) cin >> row;
        bool lost = false;
        for (int r=0; r<n; ++r)
            for (int c=0; c<n; ++c) lost |= mines[r][c]=='*' && clicks[r][c]=='x';
        for (int r=0; r<n; ++r) {
            for (int c=0; c<n; ++c) {
                if (lost && mines[r][c]=='*') { cout << '*'; continue; }
                if (clicks[r][c]!='x') { cout << '.'; continue; }
                int count=0;
                for (int y=max(0,r-1); y<=min(n-1,r+1); ++y)
                    for (int x=max(0,c-1); x<=min(n-1,c+1); ++x) count += mines[y][x]=='*';
                cout << count;
            }
            cout << '\n';
        }
        if (t) cout << '\n';
    }
}
