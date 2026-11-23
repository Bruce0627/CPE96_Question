// UVa 10221 - Satellites
#include <bits/stdc++.h>

using namespace std;

int main() {
    double height,angle;string unit;
    while(cin>>height>>angle>>unit) {
        if(unit=="min") angle/=60;
        angle=fmod(angle,360);
        angle=min(angle,360-angle)*acos(-1.0)/180;
        double radius=height+6440;
        cout << fixed << setprecision(6) << radius*angle << ' ' << 2*radius*sin(angle/2) << '\n';
    }
}
