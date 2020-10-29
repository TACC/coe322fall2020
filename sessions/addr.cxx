#include <iostream>
using std::cout;
using std::endl;

int main() {
  int i;
  int *addr_of_i;
  addr_of_i = &i;
  i = 7;
  cout << "address: " << addr_of_i << endl;
  cout << "value  : " << *addr_of_i << endl;
  i++;
  cout << "address: " << addr_of_i << endl;
  cout << "value  : " << *addr_of_i << endl;
  
  // RIGHT
  (*addr_of_i)++;
  cout << "address: " << addr_of_i << endl;
  cout << "value  : " << *addr_of_i << endl;
  
  /*
  // WRONG
  addr_of_i++;
  cout << "address: " << addr_of_i << endl;
  cout << "value  : " << *addr_of_i << endl;
  */

  // higher knowledge:
  int **addr_of_addr = &add_of_i;

  return 0;
}
