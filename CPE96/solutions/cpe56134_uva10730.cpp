// CPE 56134 | UVa 10730 | Antiarithmetic
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    for (int n; cin >> n && n; ) {
        char colon; cin >> colon;
        vector<int> position(n);
        for (int i = 0, value; i < n; ++i) { cin >> value; position[value]=i; }
        bool valid = true;
        for (int middle = 1; middle+1 < n && valid; ++middle) {
            int limit = min(middle,n-1-middle);
            for (int step = 1; step <= limit; ++step) {
                int a=position[middle-step], b=position[middle], c=position[middle+step];
                if ((a<b && b<c) || (c<b && b<a)) { valid=false; break; }
            }
        }
        cout << (valid ? "yes\n" : "no\n");
    }
}
