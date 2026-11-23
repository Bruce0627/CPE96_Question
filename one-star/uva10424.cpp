// UVa 10424 - Love Calculator
#include <bits/stdc++.h>

using namespace std;

int root(const string &name) {
    int sum=0;
    for (unsigned char c : name) if (isalpha(c)) sum+=tolower(c)-'a'+1;
    return sum ? 1+(sum-1)%9 : 0;
}
int main() {
    string a,b;
    while (getline(cin,a) && getline(cin,b)) {
        int x=root(a), y=root(b);
        cout << fixed << setprecision(2) << (max(x,y)?100.0*min(x,y)/max(x,y):0) << " %\n";
    }
}
