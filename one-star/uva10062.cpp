// UVa 10062 - Tell Me the Frequencies!
#include <bits/stdc++.h>

using namespace std;

int main() {
    bool first=true;
    for(string line;getline(cin,line);) {
        array<int,256> counts{};
        for(unsigned char c:line) ++counts[c];
        vector<pair<int,int>> order;
        for(int c=0;c<256;++c) if(counts[c]) order.emplace_back(counts[c],-c);
        sort(order.begin(),order.end());
        if(!first) cout << '\n';
        first=false;
        for(auto [frequency,negativeCode]:order) cout << -negativeCode << ' ' << frequency << '\n';
    }
}
