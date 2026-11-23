// UVa 118 - Mutant Flatworld Explorers
#include <bits/stdc++.h>

using namespace std;

int main() {
    int width,height;cin>>width>>height;
    set<pair<int,int>> scent;
    const string compass="NESW";
    const int dx[]={0,1,0,-1},dy[]={1,0,-1,0};
    int x,y;char initial;string commands;
    while(cin>>x>>y>>initial>>commands) {
        int direction=compass.find(initial);
        bool lost=false;
        for(char command:commands) {
            if(command=='L') { direction=(direction+3)%4; continue; }
            if(command=='R') { direction=(direction+1)%4; continue; }
            int nx=x+dx[direction],ny=y+dy[direction];
            if(nx<0 || nx>width || ny<0 || ny>height) {
                if(scent.insert({x,y}).second) { lost=true; break; }
            } else { x=nx; y=ny; }
        }
        cout << x << ' ' << y << ' ' << compass[direction] << (lost?" LOST\n":"\n");
    }
}
