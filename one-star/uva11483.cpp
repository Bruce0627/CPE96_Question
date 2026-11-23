// UVa 11483 - Code Creator
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc=0;
    for(int n;cin>>n && n;) {
        string line;getline(cin,line);
        cout << "Case " << ++tc << ":\n#include<string.h>\n#include<stdio.h>\nint main()\n{\n";
        while(n-- && getline(cin,line)) {
            cout << "printf(\"";
            for(char c:line) {
                if(c=='"' || c=='\\') cout << '\\';
                cout << c;
            }
            cout << "\\n\");\n";
        }
        cout << "printf(\"\\n\");\nreturn 0;\n}\n";
    }
}
