// UVa 10252 - Common Permutation
#include <bits/stdc++.h>

using namespace std;

int main() {
    string a,b;
    while(getline(cin,a) && getline(cin,b)) {
        array<int,26> x{},y{};
        for(char c:a) ++x[c-'a'];
        for(char c:b) ++y[c-'a'];
        for(int i=0;i<26;++i) cout << string(min(x[i],y[i]),char('a'+i));
        cout << '\n';
    }
}
