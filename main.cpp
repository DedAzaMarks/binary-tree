#include <iostream>
#include <memory>
#include "Visitor.h"
#include "Nodes.h"

using std::make_shared;

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

  Visitor visitor;
  add.accept_print(visitor);
  std::cout << " = " << add.accept_evaluate(visitor) << "\n";
  return 0;
}
