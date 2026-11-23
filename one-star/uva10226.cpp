// UVa 10226 - Hardwood Species
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;cin>>t;
    string line;getline(cin,line);
    getline(cin,line);
    while(t--) {
        map<string,int> counts;
        int total=0;
        while(getline(cin,line) && !line.empty()) { ++counts[line]; ++total; }
        for(const auto &[name,count]:counts)
            cout << name << ' ' << fixed << setprecision(4) << 100.0*count/total << '\n';
        if(t) cout << '\n';
    }
}
