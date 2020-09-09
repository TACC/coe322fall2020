#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
  int maybeprime;
  cin >> maybeprime;

  bool isprime{true};
  // determine whether the number is prime:
  // for all d from 2 to number -1 : d is not a divisor
  // that is: 2 not divisor AND 3 not divisor AND 4 not divisor &c
  for ( int d=2; d<maybeprime; d++ ) {
    bool this_value_is_not_a_divisor = maybeprime%d!=0;
    isprime = isprime and this_value_is_not_a_divisor;
  }

  // print out the conclusion
  if (isprime) 
    cout << "prime" << endl;
  else
    cout << "not prime" << endl ;

  return 0;
}
