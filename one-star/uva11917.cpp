// UVa 11917 - Do Your Own Homework!
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;cin>>t;
    for(int tc=1;tc<=t;++tc) {
        int n;cin>>n;
        map<string,int> days;
        while(n--) {
            string subject;int required;cin>>subject>>required;
            days[subject]=required;
        }
        int deadline;string target;cin>>deadline>>target;
        auto it=days.find(target);
        cout << "Case " << tc << ": ";
        if(it==days.end() || it->second>deadline+5) cout << "Do your own homework!\n";
        else if(it->second<=deadline) cout << "Yesss\n";
        else cout << "Late\n";
    }
}
