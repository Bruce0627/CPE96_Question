// UVa 10908 - Largest Square
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;cin>>t;
    while(t--) {
        int rows,cols,q;cin>>rows>>cols>>q;
        vector<string> grid(rows);
        for(auto &line:grid) cin>>line;
        cout << rows << ' ' << cols << ' ' << q << '\n';
        while(q--) {
            int r,c;cin>>r>>c;
            int radius=1;
            char target=grid[r][c];
            for(;r>=radius && c>=radius && r+radius<rows && c+radius<cols;++radius) {
                bool matches=true;
                for(int offset=-radius;offset<=radius;++offset)
                    matches &= grid[r-radius][c+offset]==target && grid[r+radius][c+offset]==target
                            && grid[r+offset][c-radius]==target && grid[r+offset][c+radius]==target;
                if(!matches) break;
            }
            cout << 2*radius-1 << '\n';
        }
    }
}
