// UVa 11000 - Bee
#include <bits/stdc++.h>

using namespace std;

int main() {
    for (int n; cin>>n && n>=0;) {
        uint64_t male=0,female=1;
        while (n--) {
            uint64_t nextMale=male+female;
            female=male+1;
            male=nextMale;
        }
        cout << male << ' ' << male+female << '\n';
    }
}
