// CPE 56121 | UVa 10327 | Flip Sort
#include <bits/stdc++.h>

using namespace std;

int main() {
    for (int n; cin >> n; ) {
        vector<int> values(n);
        for (int &value : values) cin >> value;
        int inversions = 0;
        for (int i = 0; i < n; ++i)
            for (int j = i+1; j < n; ++j) inversions += values[i] > values[j];
        cout << "Minimum exchange operations : " << inversions << '\n';
    }
}
