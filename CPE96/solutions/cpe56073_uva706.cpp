// CPE 56073 | UVa 706 | LC-Display
#include <bits/stdc++.h>

using namespace std;

int main() {
    // Segment order: top, upper-left, upper-right, middle, lower-left, lower-right, bottom.
    const string segments[] = {"1110111","0010010","1011101","1011011","0111010",
                               "1101011","1101111","1010010","1111111","1111011"};
    int size; string digits;
    while (cin >> size >> digits && size) {
        for (int row = 0; row < 2*size+3; ++row) {
            for (size_t i = 0; i < digits.size(); ++i) {
                if (i) cout << ' ';
                const auto &s = segments[digits[i]-'0'];
                if (row == 0 || row == size+1 || row == 2*size+2) {
                    int segment = row == 0 ? 0 : (row == size+1 ? 3 : 6);
                    cout << ' ' << string(size, s[segment] == '1' ? '-' : ' ') << ' ';
                } else {
                    int left = row < size+1 ? 1 : 4;
                    cout << (s[left] == '1' ? '|' : ' ') << string(size,' ')
                         << (s[left+1] == '1' ? '|' : ' ');
                }
            }
            cout << '\n';
        }
        cout << '\n';
    }
}
