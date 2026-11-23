// UVa 10190 - Divide, But Not Quite Conquer!
#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n,m;
    while (cin>>n>>m) {
        vector<long long> sequence={n};
        if (n>1 && m>1) {
            while (n>1 && n%m==0) { n/=m; sequence.push_back(n); }
        }
        if (n!=1 || sequence.size()<2) { cout << "Boring!\n"; continue; }
        for (size_t i=0;i<sequence.size();++i) cout << (i?" ":"") << sequence[i];
        cout << '\n';
    }
}
