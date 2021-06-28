//
// Created by Maxim Bordyugov on 22/06/2021.
//
#include <iostream>

#include "Nodes.h"

using std::cout;

// NumberNode
NumberNode::NumberNode(long long int v) {
  val = v;
}
long long int NumberNode::accept_evaluate(AbstractVisitor &abstract_visitor) {
  return abstract_visitor.visit(*this);
}
void NumberNode::accept_print(AbstractVisitor &abstract_visitor) {
  abstract_visitor.print(*this);
}
NumberNode::~NumberNode() = default;

//MinusNode
long long int MinusNode::accept_evaluate(AbstractVisitor &abstract_visitor) {
  return abstract_visitor.visit(*this);
}
void MinusNode::accept_print(AbstractVisitor &abstract_visitor) {
  abstract_visitor.print(*this);
}
MinusNode::~MinusNode() = default;

//AddNode
long long int AddNode::accept_evaluate(AbstractVisitor &abstract_visitor) {
  return abstract_visitor.visit(*this);
}
void AddNode::accept_print(AbstractVisitor &abstract_visitor) {
  abstract_visitor.print(*this);
}
AddNode::~AddNode() = default;

//SubNode
long long int SubNode::accept_evaluate(AbstractVisitor &abstract_visitor) {
  return abstract_visitor.visit(*this);
}
void SubNode::accept_print(AbstractVisitor &abstract_visitor) {
  abstract_visitor.print(*this);
}
SubNode::~SubNode() = default;

//MulNode
long long int MulNode::accept_evaluate(AbstractVisitor &abstract_visitor) {
  return abstract_visitor.visit(*this);
}
void MulNode::accept_print(AbstractVisitor &abstract_visitor) {
  abstract_visitor.print(*this);
}
MulNode::~MulNode() = default;

//DivNode
void DivNode::accept_print(AbstractVisitor &abstract_visitor) {
  abstract_visitor.print(*this);
}
long long int DivNode::accept_evaluate(AbstractVisitor &abstract_visitor) {
  return abstract_visitor.visit(*this);
}
DivNode::~DivNode() = default;