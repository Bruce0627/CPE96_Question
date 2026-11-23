// UVa 10008 - What's Cryptanalysis?
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;cin>>n;
    string line;getline(cin,line);
    array<int,26> frequency{};
    while(n-- && getline(cin,line)) {
        for(unsigned char c:line) if(isalpha(c)) ++frequency[toupper(c)-'A'];
    }
    vector<pair<int,char>> order;
    for(int i=0;i<26;++i) if(frequency[i]) order.emplace_back(-frequency[i],char('A'+i));
    sort(order.begin(),order.end());
    for(auto [negativeCount,letter]:order) cout << letter << ' ' << -negativeCount << '\n';
}
