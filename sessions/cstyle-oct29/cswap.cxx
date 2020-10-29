#include <iostream>
using std::cout;
using std::endl;

void swap(int *iaddr,int *jaddr) {
  /* THIS IS A TAD VERBOSE
  int i = *iaddr, j = *jaddr;

  int temp = i;
  i = j;
  j = temp;

  // WRONG  iaddr = &i;
  *iaddr = i;
  *jaddr = j;
  */

  int temp = *iaddr;
  *iaddr = *jaddr;
  *jaddr = temp;

}

int main() {
  int i = 7, j = 8;

  swap(&i,&j);
  cout << i << "," << j << endl;

  return 0;
}
