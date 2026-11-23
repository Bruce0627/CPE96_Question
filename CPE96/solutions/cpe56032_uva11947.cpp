// CPE 56032 | UVa 11947 | Cancer or Scorpio
#include <bits/stdc++.h>

using namespace std;

int main() {
    const int lengths[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    const int start[] = {21,20,21,21,22,22,23,22,24,24,23,23};
    const string signs[] = {"aquarius","pisces","aries","taurus","gemini","cancer",
        "leo","virgo","libra","scorpio","sagittarius","capricorn"};
    int tests; cin >> tests;
    for (int tc = 1; tc <= tests; ++tc) {
        string date; cin >> date;
        int m = stoi(date.substr(0,2)) - 1, d = stoi(date.substr(2,2)) + 280;
        int y = stoi(date.substr(4));
        while (true) {
            bool leap = y % 400 == 0 || (y % 4 == 0 && y % 100 != 0);
            int limit = lengths[m] + (m == 1 && leap);
            if (d <= limit) break;
            d -= limit;
            if (++m == 12) { m = 0; ++y; }
        }
        cout << tc << ' ' << setfill('0') << setw(2) << m + 1 << '/' << setw(2) << d
             << '/' << setw(4) << y << ' ' << signs[(m + 12 - (d < start[m])) % 12] << '\n';
    }
}
