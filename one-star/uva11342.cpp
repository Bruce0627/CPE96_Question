// UVa 11342 - Three-Square
#include <bits/stdc++.h>

using namespace std;

int main() {
    constexpr int limit=50000;
    vector<array<int,3>> answers(limit+1,{-1,-1,-1});
    for (int a=0;3*a*a<=limit;++a)
        for (int b=a;a*a+2*b*b<=limit;++b)
            for (int c=b;a*a+b*b+c*c<=limit;++c) {
                auto &answer=answers[a*a+b*b+c*c];
                if (answer[0]<0) answer={a,b,c};
            }
    int t; cin>>t;
    while (t--) {
        int n; cin>>n;
        auto [a,b,c]=answers[n];
        if (a<0) cout << "-1\n";
        else cout << a << ' ' << b << ' ' << c << '\n';
    }
}
