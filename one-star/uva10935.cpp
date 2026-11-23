// CPE 56141 | UVa 10935 | Throwing cards away I
#include <bits/stdc++.h>

using namespace std;

int main() {
    for (int n; cin >> n && n; ) {
        queue<int> cards;
        for (int i = 1; i <= n; ++i) cards.push(i);
        cout << "Discarded cards:";
        const char *separator = " ";
        while (cards.size() > 1) {
            cout << separator << cards.front();
            cards.pop();
            cards.push(cards.front());
            cards.pop();
            separator = ", ";
        }
        cout << "\nRemaining card: " << cards.front() << '\n';
    }
}
