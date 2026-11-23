// UVa 10222 - Decode the Mad Man
#include <bits/stdc++.h>

using namespace std;

int main() {
    const string keys=string(1,char(96))+"1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    for(char c;cin.get(c);) {
        size_t index=keys.find(tolower(static_cast<unsigned char>(c)));
        cout << (index!=string::npos && index>=2 ? keys[index-2] : c);
    }
}
