// UVa 10170 - The Hotel with Infinite Rooms
#include <bits/stdc++.h>

using namespace std;

using U=uint64_t;
bool reaches(U first,U last,U day) {
    U count=last-first+1;
    // Compare the arithmetic-series product using division to avoid overflow.
    if ((count&1)==0) {
        count/=2;
        if (first>=day || last>=day) return true;
        if (first>=day-last) return true;
        U sum=first+last;
        return count >= day/sum+(day%sum!=0);
    }
    U average=first+(last-first)/2;
    return count >= day/average+(day%average!=0);
}
int main() {
    for (U s,d;cin>>s>>d;) {
        U lo=s,hi=s;
        while (!reaches(s,hi,d)) hi+=hi-s+1;
        while(lo<hi) {
            U mid=lo+(hi-lo)/2;
            if(reaches(s,mid,d)) hi=mid;
            else lo=mid+1;
        }
        cout << lo << '\n';
    }
}
