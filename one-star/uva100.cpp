// UVa 100 - The 3n + 1 Problem
#include <bits/stdc++.h>

using namespace std;

int main() {
    int a,b;
    while (cin>>a>>b) {
        int best=0;
        for (int start=min(a,b); start<=max(a,b); ++start) {
            int count=1;
            for (long long n=start;n!=1;++count) n=n%2?3*n+1:n/2;
            best=max(best,count);
        }
        cout << a << ' ' << b << ' ' << best << '\n';
    }
}
