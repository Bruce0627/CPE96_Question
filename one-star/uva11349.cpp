// UVa 11349 - Symmetric Matrix
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;cin>>t;
    for(int tc=1;tc<=t;++tc) {
        char label,equalSign;
        int n;cin>>label>>equalSign>>n;
        vector<long long> matrix(n*n);
        bool symmetric=true;
        for(auto &value:matrix) { cin>>value; symmetric &= value>=0; }
        symmetric &= equal(matrix.begin(),matrix.end(),matrix.rbegin());
        cout << "Test #" << tc << ": " << (symmetric?"Symmetric.\n":"Non-symmetric.\n");
    }
}
