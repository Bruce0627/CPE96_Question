// UVa 10929 - You Can Say 11
#include <bits/stdc++.h>

using namespace std;

int main() {
    for(string s;cin>>s && s!="0";) {
        int remainder=0;
        for(char c:s) remainder=(10*remainder+c-'0')%11;
        cout << s << (remainder?" is not a multiple of 11.\n":" is a multiple of 11.\n");
    }
}
