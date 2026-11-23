// CPE 56132 | UVa 12820 | Cool Word
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc = 0;
    for (int n; cin >> n; ) {
        int cool = 0;
        while (n--) {
            string word; cin >> word;
            array<int,26> frequency{};
            for (char letter : word) ++frequency[letter-'a'];
            set<int> counts;
            bool unique = true;
            for (int count : frequency)
                if (count && !counts.insert(count).second) unique = false;
            cool += unique && counts.size() >= 2;
        }
        cout << "Case " << ++tc << ": " << cool << '\n';
    }
}
