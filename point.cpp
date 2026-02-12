#include <bits/stdc++.h>
using namespace std;

struct point{
    float x;
    float y;
    point(float x, float y){
        this->x=x;
        this->y=y;
    }

    float slope(point a, point b) {
        if ((b.x - a.x) == 0) {
            cout << "Divide by Zero Error!";
            return 0;
        }
        else{
            return (b.y-a.y)/(b.x-a.x);
        }
    }

    bool operator==(point a) const {
      if(a.x==x && a.y== y)
         return true;
      else
         return false;
    }

    point operator+(point a) const {
      return point(a.x + this->x, a.y+this->y);
    }

    point operator-(point a) const {
      return point(a.x - this->x, a.y-this->y);
    }
};