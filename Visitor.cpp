//
// Created by Maxim Bordyugov on 22/06/2021.
//

#include "Visitor.h"
long long int Visitor::visit(NumberNode &number_node) {
  return number_node.val;
}
long long int Visitor::visit(MinusNode &) {
  return 0;
}
long long int Visitor::visit(AddNode &) {
  return 0;
}
long long int Visitor::visit(SubNode &) {
  return 0;
}
long long int Visitor::visit(MulNode &) {
  return 0;
}
long long int Visitor::visit(DivNode &) {
  return 0;
}
