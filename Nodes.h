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
class AbstractNode;
class NumberNode : public AbstractNode {
 public:
  long long int val;
  long long int accept_evaluate(AbstractVisitor &abstract_visitor) override;
  void accept_print(AbstractVisitor &abstract_visitor) override;
  explicit NumberNode(long long int);
  ~NumberNode() override;
};

class MinusNode : public AbstractNode {
 public:
  shared_ptr<AbstractNode> node;
  long long int accept_evaluate(AbstractVisitor &abstract_visitor) override;
  void accept_print(AbstractVisitor &abstract_visitor) override;
  ~MinusNode() override;
};

class AddNode : public AbstractNode {
 public:
  shared_ptr<AbstractNode> l, r;
  long long int accept_evaluate(AbstractVisitor &abstract_visitor) override;
  void accept_print(AbstractVisitor &abstract_visitor) override;
  ~AddNode() override;
};

class SubNode : public AbstractNode {
 public:
  shared_ptr<AbstractNode> l, r;
  long long int accept_evaluate(AbstractVisitor &abstract_visitor) override;
  void accept_print(AbstractVisitor &abstract_visitor) override;
  ~SubNode() override;
};

class MulNode : public AbstractNode {
 public:
  shared_ptr<AbstractNode> l, r;
  long long int accept_evaluate(AbstractVisitor &abstract_visitor) override;
  void accept_print(AbstractVisitor &abstract_visitor) override;
  ~MulNode() override;
};

class DivNode : public AbstractNode {
 public:
  shared_ptr<AbstractNode> l, r;
  long long int accept_evaluate(AbstractVisitor &abstract_visitor) override;
  void accept_print(AbstractVisitor &abstract_visitor) override;
  ~DivNode() override;
};
#endif //ROMAN_NUMERALS_PATTERNVISITOR_NODES_H_
