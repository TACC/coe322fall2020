#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

int main() {

  int i;
  // modulus operator i%5  is "i modulo 5"

  cin >> i;
  if (i%2==0) {
    cout << "even" << endl;
  } else {
    cout << "odd" << endl;
  }

  // emacsing: 
  // control-d backspace : delete under cursor, backspace
  // ESC d    ESC backspace : delete word under cursor, delete backward
  // control-k : kill line (again, line end)
  // control-y : yank-back (insert whatever you killed)

  // c-f c-b : character forward back
  // ESC f   ESC b : word forward back
  // ESC c-f   ESC c-b : block forward back
  // c-n c-p : line next / previous

  return 0;
}
