// UVa 10415 - Eb Alto Saxophone Player
#include <bits/stdc++.h>

using namespace std;

int main() {
    const map<char,string> fingering={{'c',"2347890"},{'d',"234789"},{'e',"23478"},
        {'f',"2347"},{'g',"234"},{'a',"23"},{'b',"2"},{'C',"3"},{'D',"1234789"},
        {'E',"123478"},{'F',"12347"},{'G',"1234"},{'A',"123"},{'B',"12"}};
    int t;cin>>t;
    string line;getline(cin,line);
    while(t-- && getline(cin,line)) {
        array<int,10> count{};
        bitset<10> previous;
        for(char note:line) {
            bitset<10> current;
            for(char finger:fingering.at(note)) current.set((finger-'0'+9)%10);
            for(size_t i=0;i<count.size();++i) count[i]+=current[i] && !previous[i];
            previous=current;
        }
        for(size_t i=0;i<count.size();++i) cout << (i?" ":"") << count[i];
        cout << '\n';
    }
}
