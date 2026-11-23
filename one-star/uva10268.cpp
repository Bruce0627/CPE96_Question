// UVa 10268 - 498’
#include <bits/stdc++.h>

using namespace std;

int main() {
    long long x;string line;
    while(cin>>x) {
        getline(cin,line);
        getline(cin,line);
        istringstream input(line);
        vector<long long> a;
        for(long long coefficient;input>>coefficient;) a.push_back(coefficient);
        long long result=0;
        for(size_t i=0;i+1<a.size();++i)
            result=result*x+a[i]*static_cast<long long>(a.size()-1-i);
        cout << result << '\n';
    }
}
