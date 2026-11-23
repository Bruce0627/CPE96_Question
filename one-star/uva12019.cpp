// UVa 12019 - Doom's Day Algorithm
#include <bits/stdc++.h>

using namespace std;

int main() {
    const int start[]={0,31,59,90,120,151,181,212,243,273,304,334};
    const string weekdays[]={"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};
    int t; cin>>t;
    while(t--) { int m,d; cin>>m>>d; cout << weekdays[(start[m-1]+d-1)%7] << '\n'; }
}
