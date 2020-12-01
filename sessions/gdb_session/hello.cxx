/****************************************************************
 ****
 **** This program source is part of
 **** Introduction to High-performance Scientific Computing
 **** by Victor Eijkhout
 **** copyright Victor Eijkhout 2011-2020
 ****
 **** gdb example program
 ****
 ****************************************************************/

#include <iostream>
using std::cout;
using std::endl;

void say(int n) {
  cout << "hello world " << n << endl;
}

int main() {

  for (int i=0; i<10; i++) {
    int ii;
    ii = i*i;
    ii++;
    say(ii);
  }

  return 0;
}
  
