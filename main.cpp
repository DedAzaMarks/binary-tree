#include <iostream>
#include <memory>
#include "Visitor.h"
#include "Nodes.h"

using std::make_shared;

template<typename T>
void f(T node) {
  Visitor visitor;

  node.accept_print(visitor);
  std::cout << " = " << node.accept_evaluate(visitor) << "\n";
}

int main() {
  NumberNode two(2);
  NumberNode three(3);
  NumberNode four(4);
  MulNode mul;
  mul.l = make_shared<NumberNode>(three);
  mul.r = make_shared<NumberNode>(four);
  AddNode add;
  add.l = make_shared<NumberNode>(two);
  add.r = make_shared<MulNode>(mul);

  f(add);

  MinusNode mFifteen;
  mFifteen.node = make_shared<NumberNode>(15);
  
  f(mFifteen);
  return 0;
}
