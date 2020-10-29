#include <iostream>
using std::cout;
using std::endl;

void set_array( double *x, int xsize ) {
  for (int i=0; i<xsize; i++) {
    x[i] = 1;
    // HIGHER KNOWLEDGE: *x++ = 1;
  }
}

int main() {

  double x[5];
  set_array(x,5);
  cout << x[3] << endl;

  return 0;
}
