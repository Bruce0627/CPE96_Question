// UVa 490 - Rotating Sentences
#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<string> lines;
    size_t width=0;
    for(string line;getline(cin,line);) {
        width=max(width,line.size());
        lines.push_back(line);
    }
    for(size_t c=0;c<width;++c) {
        for(auto row=lines.rbegin();row!=lines.rend();++row) cout << (c<row->size()?(*row)[c]:' ');
        cout << '\n';
    }
}
