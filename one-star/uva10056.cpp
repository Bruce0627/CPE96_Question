// UVa 10056 - What Is the Probability!!
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;cin>>t;
    while(t--) {
        int n,i;double p;cin>>n>>p>>i;
        double answer=0;
        if(p==1) answer=i==1;
        else if(p>0) {
            double logFailure=log1p(-p);
            answer=p*exp((i-1)*logFailure)/(-expm1(n*logFailure));
        }
        cout << fixed << setprecision(4) << answer << '\n';
    }
}
