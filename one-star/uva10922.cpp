// UVa 10922 - 2 the 9s
#include <bits/stdc++.h>

using namespace std;

int main() {
    for(string s;cin>>s && s!="0";) {
        int sum=0;
        for(char c:s) sum+=c-'0';
        if(sum%9) { cout << s << " is not a multiple of 9.\n"; continue; }
        int degree=1;
        while(sum>9) {
            int next=0;
            for(;sum;sum/=10) next+=sum%10;
            sum=next; ++degree;
        }
        cout << s << " is a multiple of 9 and has 9-degree " << degree << ".\n";
    }
}
