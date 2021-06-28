//
// Created by Maxim Bordyugov on 22/06/2021.
//

#ifndef ROMAN_NUMERALS_PATTERNVISITOR_ABSTRACTNODE_H_
#define ROMAN_NUMERALS_PATTERNVISITOR_ABSTRACTNODE_H_

class AbstractVisitor;
class AbstractNode {
 public:
  virtual long long int accept_evaluate(AbstractVisitor &abstract_visitor) = 0;
  virtual void accept_print(AbstractVisitor &abstract_visitor) = 0;
  virtual ~AbstractNode() = 0;
};

#endif //ROMAN_NUMERALS_PATTERNVISITOR_ABSTRACTNODE_H_
