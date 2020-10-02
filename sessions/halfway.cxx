#include <iostream>
using std::cout;
using std::cin;
using std::endl;

class Point {
private:
  double x,y;
public:
//   // simplest way
//   Point( double in_x,double in_y) {
//     x = in_x, y = in_y;
//   };

//   // preferable for technical reasons
//   Point( double in_x,double in_y) 
//     : x(in_x),y(in_y) {};

  // If you have a hard time coming up with enough names:
  // shorter variant:
  Point( double x,double y) 
    : x(x),y(y) {};
  // `default constructor'
  Point() {};

  Point halfway( Point other ) {
    double hx = (x+other.x)/2.,
      hy = (y+other.y)/2.;
    return Point(hx,hy);
  };
  // Solution Best:
  // (if you want to print a point, make a print method)
  void print() {
    cout << x << "," << y << endl;
  };

  // solution so-so:
  // (why do you need that data member? if it's to print,
  //  make a print function)
  double get_x() { return x; }

  // solution really not good:
  // public: double x,y;

};

int main() {

  int i;
  i = 5;

  // these use the constructor from x,y
  Point p(1,1), q(3,3);

  // this uses the default constructor
  Point h;
  h = p.halfway(q);

  h.print();

  return 0;
}
