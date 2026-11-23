// UVa 299 - Train Swapping
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;cin>>t;
    while(t--) {
        int n;cin>>n;
        vector<int> cars(n);
        for(int &car:cars) cin>>car;
        int swaps=0;
        for(int i=0;i<n;++i)
            for(int j=i+1;j<n;++j) swaps+=cars[i]>cars[j];
        cout << "Optimal train swapping takes " << swaps << " swaps.\n";
    }
}
