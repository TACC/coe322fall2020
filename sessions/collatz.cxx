#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {

  // try collatz on all starting points to 1000
  // and record the longest sequence
  int start_of_the_longest_sequence=0, length_of_the_longest_sequence=0;
  for (int starting_point=2; starting_point<1000; starting_point++) {
    // compute length of sequence from the current starting point
    int length=0;
    // iterate from starting point until reaching 1.
    int current = starting_point;
    for ( ; ; length++ ) {
      //compute next iterate, if 1 exit, otherwise continue
      int next;
      if (current%2==0)
	next = current/2;
      else 
	next = 3*current + 1;
      if (next==1) break;
      current = next;
    }
    // if longer, then remember
    if (length>length_of_the_longest_sequence) {
      cout << "new record " << length << " at " << starting_point << endl;
      length_of_the_longest_sequence = length;
    }
  }

  return 0;
}

// ESC f : word forward
// ESC d : delete word
// control-y : "yank back" : paste
