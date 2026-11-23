// CPE 56131 | UVa 642 | Word Amalgamation
#include <bits/stdc++.h>

using namespace std;

string key(string word) {
    sort(word.begin(), word.end());
    return word;
}
int main() {
    map<string,vector<string>> dictionary;
    for (string word; cin >> word && word != "XXXXXX"; )
        dictionary[key(word)].push_back(word);
    for (auto &[signature, words] : dictionary) sort(words.begin(), words.end());
    for (string word; cin >> word && word != "XXXXXX"; ) {
        const auto match = dictionary.find(key(word));
        if (match == dictionary.end()) cout << "NOT A VALID WORD\n";
        else for (const auto &result : match->second) cout << result << '\n';
        cout << "******\n";
    }
}
