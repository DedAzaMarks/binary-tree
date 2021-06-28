//
// Created by Maxim Bordyugov on 22/06/2021.
//

#include <iostream>

#include "Visitor.h"
#include "Nodes.h"

using std::cout;

long long int Visitor::visit(NumberNode &number_node) {
  return number_node.val;
}
void Visitor::print(NumberNode &number_node) {
  cout << number_node.val;
}

long long int Visitor::visit(MinusNode &minus_node) {
  return -minus_node.node->accept_evaluate(*this);
}
void Visitor::print(MinusNode &minus_node) {
  minus_node.node->accept_print(*this);
}

long long int Visitor::visit(AddNode &add_node) {
  return add_node.l->accept_evaluate(*this) + add_node.r->accept_evaluate(*this);
}
void Visitor::print(AddNode &add_node) {
  cout << "(";
  add_node.l->accept_print(*this);
  cout << "+";
  add_node.r->accept_print(*this);
  cout << ")";
}

long long int Visitor::visit(SubNode &sub_node) {
  return sub_node.l->accept_evaluate(*this) - sub_node.r->accept_evaluate(*this);
}
void Visitor::print(SubNode &sub_node) {
  cout << "(";
  sub_node.l->accept_print(*this);
  cout << "-";
  sub_node.r->accept_print(*this);
  cout << ")";
}

long long int Visitor::visit(MulNode &mul_node) {
  return mul_node.l->accept_evaluate(*this) * mul_node.r->accept_evaluate(*this);
}
void Visitor::print(MulNode &mul_node) {
  cout << "(";
  mul_node.l->accept_print(*this);
  cout << "*";
  mul_node.r->accept_print(*this);
  cout << ")";
}

long long int Visitor::visit(DivNode &div_node) {
  return div_node.l->accept_evaluate(*this) / div_node.r->accept_evaluate(*this);
}
void Visitor::print(DivNode &div_node) {
  cout << "(";
  div_node.l->accept_print(*this);
  cout << "/";
  div_node.r->accept_print(*this);
  cout << ")";
}

