// UVa 10038 - Jolly Jumpers
#include <bits/stdc++.h>

using namespace std;

int main() {
    for(int n;cin>>n;) {
        vector<bool> seen(n);
        long long previous; cin>>previous;
        bool valid=true;
        for(int i=1;i<n;++i) {
            long long current; cin>>current;
            long long diff=abs(current-previous);
            if(diff<=0 || diff>=n || seen[diff]) valid=false;
            else seen[diff]=true;
            previous=current;
        }
        cout << (valid?"Jolly\n":"Not jolly\n");
    }
}
