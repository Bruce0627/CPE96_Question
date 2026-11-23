// UVa 10281 - Average Speed
#include <bits/stdc++.h>

using namespace std;

int main() {
    double distance=0, speed=0;
    int previous=0;
    for (string line; getline(cin,line);) {
        istringstream input(line);
        string time; input >> time;
        if (time.empty()) continue;
        int now=3600*stoi(time.substr(0,2))+60*stoi(time.substr(3,2))+stoi(time.substr(6));
        distance += speed*(now-previous)/3600;
        previous=now;
        double next;
        if (input >> next) speed=next;
        else cout << time << ' ' << fixed << setprecision(2) << distance << " km\n";
    }
}
