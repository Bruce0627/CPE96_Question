// UVa 10370 - Above Average
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> marks(n);
        for (int &mark : marks) cin >> mark;
        int total=accumulate(marks.begin(),marks.end(),0);
        int above=count_if(marks.begin(),marks.end(),[&](int mark){return mark*n>total;});
        cout << fixed << setprecision(3) << 100.0*above/n << "%\n";
    }
}
