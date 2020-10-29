#include <iostream>
using std::cout;
using std::endl;

#include <memory>
using std::make_shared;
using std::shared_ptr;

class Node { 
private:
  int datavalue{0}; 
  shared_ptr<Node> tail_ptr{nullptr}; 
public:
  Node() {} Node(int value)
    : datavalue(value) {};
  int value() { return datavalue; };
  bool has_next() {
    if (tail_ptr==nullptr)
      return false;
    else return true;
  };
  void set_tail( shared_ptr<Node> tail ) {
    tail_ptr = tail;
  };
  void append( shared_ptr<Node> tail ) {
    if (!has_next()) {
      set_tail(tail);
    } else {
      tail_ptr->append(tail);
    }
  };
  int list_length() {
    if (!has_next()) return 1;
    else
      return 1+tail_ptr->list_length();
  };
  void print() {
    cout << datavalue;
    if (!has_next())
      cout << endl;
    else {
      cout << ",";
      tail_ptr->print();
    }
  };
};

int main() {
  auto
    first = make_shared<Node>(23),
    second = make_shared<Node>(45),
    third = make_shared<Node>(32);
  first->set_tail(second);
  first->print();
  cout << "List length: "
       << first->list_length() << endl;
  first->append(third);
  first->print();
  cout << "List length: "
       << first->list_length() << endl;

  return 0;
}
