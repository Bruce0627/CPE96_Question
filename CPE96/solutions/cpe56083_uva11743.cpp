// CPE 56083 | UVa 11743 | Credit Check
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tests; cin >> tests;
    while (tests--) {
        int sum = 0, index = 0;
        for (int group = 0; group < 4; ++group) {
            string digits; cin >> digits;
            for (char c : digits) {
                int value = (c-'0') * (index++ % 2 == 0 ? 2 : 1);
                sum += value > 9 ? value-9 : value;
            }
        }
        cout << (sum % 10 == 0 ? "Valid\n" : "Invalid\n");
    }
}
