// CPE 56133 | UVa 496 | Simply Subsets
#include <bits/stdc++.h>

using namespace std;

set<int> readSet(const string &line) {
    istringstream input(line);
    set<int> values;
    for (int value; input >> value; ) values.insert(value);
    return values;
}
int main() {
    string first,second;
    while (getline(cin,first) && getline(cin,second)) {
        auto a=readSet(first), b=readSet(second);
        if (a == b) cout << "A equals B\n";
        else if (includes(b.begin(),b.end(),a.begin(),a.end())) cout << "A is a proper subset of B\n";
        else if (includes(a.begin(),a.end(),b.begin(),b.end())) cout << "B is a proper subset of A\n";
        else {
            bool overlaps = false;
            for (int value : a) if (b.count(value)) { overlaps=true; break; }
            cout << (overlaps ? "I'm confused!\n" : "A and B are disjoint\n");
        }
    }
}
