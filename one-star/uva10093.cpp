// UVa 10093 - An Easy Problem!
#include <bits/stdc++.h>

using namespace std;

int main() {
    const string digits="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    for(string line;getline(cin,line);) {
        long long total=0;
        int lower=2;
        bool hasDigit=false;
        for(char c:line) {
            size_t digit=digits.find(c);
            if(digit==string::npos) continue;
            hasDigit=true;
            total+=digit;
            lower=max(lower,static_cast<int>(digit)+1);
        }
        if(!hasDigit) continue;
        int base=lower;
        while(base<=62 && total%(base-1)) ++base;
        if(base<=62) cout << base << '\n';
        else cout << "such number is impossible!\n";
    }
}
