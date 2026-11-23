// CPE 56091 | UVa 478 | Points in Figures: Rectangles, Circles, and Triangles
#include <bits/stdc++.h>

using namespace std;

struct Point { double x,y; };
struct Figure {
    char type;
    Point a{}, b{}, c{};
    double radius=0;
};
double cross(Point a, Point b, Point p) {
    return (b.x-a.x)*(p.y-a.y) - (b.y-a.y)*(p.x-a.x);
}
bool contains(const Figure &f, Point p) {
    if (f.type == 'r')
        return f.a.x < p.x && p.x < f.b.x && f.b.y < p.y && p.y < f.a.y;
    if (f.type == 'c') {
        double dx=p.x-f.a.x, dy=p.y-f.a.y;
        return dx*dx + dy*dy < f.radius*f.radius;
    }
    double a=cross(f.a,f.b,p), b=cross(f.b,f.c,p), c=cross(f.c,f.a,p);
    constexpr double epsilon=1e-10;
    return (a>epsilon && b>epsilon && c>epsilon) ||
           (a<-epsilon && b<-epsilon && c<-epsilon);
}
int main() {
    vector<Figure> figures;
    for (char type; cin >> type && type != '*'; ) {
        Figure f; f.type = type;
        cin >> f.a.x >> f.a.y;
        if (type == 'c') cin >> f.radius;
        else cin >> f.b.x >> f.b.y;
        if (type == 't') cin >> f.c.x >> f.c.y;
        figures.push_back(f);
    }
    int number = 0;
    for (Point p; cin >> p.x >> p.y && (p.x != 9999.9 || p.y != 9999.9); ) {
        ++number;
        bool found = false;
        for (size_t i = 0; i < figures.size(); ++i) if (contains(figures[i], p)) {
            cout << "Point " << number << " is contained in figure " << i+1 << '\n';
            found = true;
        }
        if (!found) cout << "Point " << number << " is not contained in any figure\n";
    }
}
