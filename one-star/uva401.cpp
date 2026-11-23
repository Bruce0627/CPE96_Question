// UVa 401 - Palindromes
#include <bits/stdc++.h>

using namespace std;

int main() {
    const string keys = "AEHIJLMOSTUVWXYZ12358", images = "A3HILJMO2TUVWXY51SEZ8";
    for (string word; cin >> word;) {
        bool palindrome = true, mirrored = true;
        for (size_t i = 0; i < word.size(); ++i) {
            char opposite = word[word.size()-1-i];
            palindrome &= word[i] == opposite;
            size_t index = keys.find(word[i]);
            mirrored &= index != string::npos && images[index] == opposite;
        }
        cout << word << " -- is "
             << (palindrome ? (mirrored ? "a mirrored palindrome." : "a regular palindrome.")
                            : (mirrored ? "a mirrored string." : "not a palindrome.")) << "\n\n";
    }
}
