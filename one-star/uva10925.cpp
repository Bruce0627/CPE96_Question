// UVa 10925 - Krakovia
#include <bits/stdc++.h>

using namespace std;

int main() {
    int bill=0;
    for (int n,people; cin>>n>>people && (n||people);) {
        vector<int> sum(1,0);
        while (n--) {
            string item; cin>>item;
            size_t size=max(sum.size(),item.size());
            sum.resize(size);
            int carry=0;
            for (size_t i=0; i<size || carry; ++i) {
                if (i==sum.size()) sum.push_back(0);
                int digit=i<item.size()?item[item.size()-1-i]-'0':0;
                int total=sum[i]+digit+carry;
                sum[i]=total%10; carry=total/10;
            }
        }
        string total,share;
        int remainder=0;
        for (auto i=sum.rbegin(); i!=sum.rend(); ++i) {
            total+=char('0'+*i);
            remainder=10*remainder+*i;
            int digit=remainder/people;
            if (digit || !share.empty()) share+=char('0'+digit);
            remainder%=people;
        }
        cout << "Bill #" << ++bill << " costs " << total << ": each friend should pay "
             << (share.empty()?"0":share) << "\n\n";
    }
}
