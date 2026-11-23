// UVa 12503 - Robot Instructions
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;cin>>t;
    while(t--) {
        int n;cin>>n;
        vector<int> delta(n+1);
        int position=0;
        for(int i=1;i<=n;++i) {
            string instruction;cin>>instruction;
            if(instruction=="SAME") {
                string as;int j;cin>>as>>j;
                delta[i]=delta[j];
            } else delta[i]=instruction=="LEFT"?-1:1;
            position+=delta[i];
        }
        cout << position << '\n';
    }
}
