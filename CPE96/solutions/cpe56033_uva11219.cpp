// CPE 56033 | UVa 11219 | How old are you?
#include <bits/stdc++.h>

using namespace std;

tuple<int,int,int> readDate() {
    int d,m,y; char slash;
    cin >> d >> slash >> m >> slash >> y;
    return {y,m,d};
}
int main() {
    int tests; cin >> tests;
    for (int tc = 1; tc <= tests; ++tc) {
        auto now = readDate(), birth = readDate();
        auto [y,m,d] = now;
        auto [by,bm,bd] = birth;
        int age = y - by - (tie(m,d) < tie(bm,bd));
        cout << "Case #" << tc << ": ";
        if (birth > now) cout << "Invalid birth date";
        else if (age > 130) cout << "Check birth date";
        else cout << age;
        cout << '\n';
    }
}
