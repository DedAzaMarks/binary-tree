//
// Created by Maxim Bordyugov on 22/06/2021.
//

#include "Visitor.h"
#include "Nodes.h"

long long int Visitor::visit(NumberNode &number_node) {
  return number_node.val;
}
long long int Visitor::visit(MinusNode &minus_node) {
  return 0;
}
long long int Visitor::visit(AddNode &add_node) {
  return 0;
}
long long int Visitor::visit(SubNode &sub_node) {
  return 0;
}
long long int Visitor::visit(MulNode &mul_node) {
  return 0;
}
long long int Visitor::visit(DivNode &div_node) {
  return 0;
}
Visitor::~Visitor() = default;
