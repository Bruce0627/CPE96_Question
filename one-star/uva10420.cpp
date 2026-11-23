// UVa 10420 - List of Conquests
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;cin>>n;
    map<string,int> counts;
    while(n--) {
        string country,rest;cin>>country;
        getline(cin,rest);
        ++counts[country];
    }
    for(const auto &[country,count]:counts) cout << country << ' ' << count << '\n';
}
