// UVa 10282 - Babelfish
#include <bits/stdc++.h>

using namespace std;

int main() {
    map<string,string> dictionary;
    for (string line; getline(cin,line) && !line.empty();) {
        istringstream input(line);
        string english, foreign; input >> english >> foreign;
        dictionary[foreign]=english;
    }
    for (string query; cin >> query;) {
        auto result=dictionary.find(query);
        cout << (result==dictionary.end() ? "eh" : result->second) << '\n';
    }
}
