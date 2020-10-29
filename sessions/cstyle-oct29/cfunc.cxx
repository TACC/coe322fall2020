#include <iostream>
using std::cout;
using std::endl;

void increment(int *x) {
  cout << "incoming address: " << x << endl;
  *x += 1;
  cout << "outgoing address: " << x << endl;
  cout << "contains        : " << *x << endl;
}

int main() {
  int i;
  i = 7;

  increment(&i); // C style! do not do this in nice C++
  cout << i << endl;

  return 0;
}
