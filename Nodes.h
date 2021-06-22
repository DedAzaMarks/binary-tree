//
// Created by Maxim Bordyugov on 22/06/2021.
//

#ifndef ROMAN_NUMERALS_PATTERNVISITOR_NODES_H_
#define ROMAN_NUMERALS_PATTERNVISITOR_NODES_H_

#include <memory>

#include "AbstractVisitor.h"
#include "AbstractNode.h"

using std::shared_ptr;

class AbstractVisitor;
class NumberNode : public AbstractNode {
 public:
  long long int val;
  long long int accept(AbstractVisitor& abstract_visitor) override;
};

class MinusNode : public AbstractNode {
 public:
  shared_ptr<AbstractNode> node;
  long long int accept(AbstractVisitor& abstract_visitor) override;
};

class AddNode : public AbstractNode {
 public:
  shared_ptr<AbstractNode> l, r;
  long long int accept(AbstractVisitor& abstract_visitor) override;
};

class SubNode : public AbstractNode {
 public:
  shared_ptr<AbstractNode> l, r;
  long long int accept(AbstractVisitor& abstract_visitor) override;
};

class MulNode : public AbstractNode {
 public:
  shared_ptr<AbstractNode> l, r;
  long long int accept(AbstractVisitor& abstract_visitor) override;
};

class DivNode : public AbstractNode {
 public:
  shared_ptr<AbstractNode> l, r;
  long long int accept(AbstractVisitor& abstract_visitor) override;
};
#endif //ROMAN_NUMERALS_PATTERNVISITOR_NODES_H_
