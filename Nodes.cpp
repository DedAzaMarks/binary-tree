//
// Created by Maxim Bordyugov on 22/06/2021.
//

#include "Nodes.h"
long long int NumberNode::accept(AbstractVisitor& abstract_visitor) {
  return abstract_visitor.visit(*this);
}

long long int MinusNode::accept(AbstractVisitor& abstract_visitor) {
  return abstract_visitor.visit(*this);
}

long long int AddNode::accept(AbstractVisitor& abstract_visitor) {
  return abstract_visitor.visit(*this);
}

long long int SubNode::accept(AbstractVisitor& abstract_visitor) {
  return abstract_visitor.visit(*this);
}

long long int MulNode::accept(AbstractVisitor& abstract_visitor) {
  return abstract_visitor.visit(*this);
}
long long int DivNode::accept(AbstractVisitor& abstract_visitor) {
  return abstract_visitor.visit(*this);
}
