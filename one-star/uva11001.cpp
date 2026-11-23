// UVa 11001 - Necklace
#include <bits/stdc++.h>

using namespace std;

int main() {
    for (long long v,loss; cin>>v>>loss && (v||loss);) {
        long long best=0, answer=0;
        for (long long k=1; k*loss<v; ++k) {
            long long score=k*(v-k*loss);
            if (score>best) { best=score; answer=k; }
            else if (score==best) answer=0;
        }
        cout << answer << '\n';
    }
}
