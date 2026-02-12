#include <iostream>
#include <ostream>
using namespace std;

#include "point.cpp"
int main() {
    
    point p = point(2, 19);
    point p2 = point(2, 19);
    point num = p + p2;
    cout << num.x << ", " << num.y << endl;
    float slope = p.slope(p,p2);
    cout << slope << endl;
    return 0;
}