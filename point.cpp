struct point{
    float x;
    float y;
    point(float x, float y){
        this->x=x;
        this->y=y;
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