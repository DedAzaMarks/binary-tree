//
// Created by Maxim Bordyugov on 22/06/2021.
//

#ifndef ROMAN_NUMERALS_PATTERNVISITOR_ABSTRACTVISITOR_H_
#define ROMAN_NUMERALS_PATTERNVISITOR_ABSTRACTVISITOR_H_

class NumberNode;
class MinusNode;
class AddNode;
class SubNode;
class MulNode;
class DivNode;
class AbstractVisitor {
 public:
  virtual long long int visit(NumberNode &number_node) = 0;
  virtual long long int visit(MinusNode &minus_node) = 0;
  virtual long long int visit(AddNode &add_node) = 0;
  virtual long long int visit(SubNode &sub_node) = 0;
  virtual long long int visit(MulNode &mul_node) = 0;
  virtual long long int visit(DivNode &div_node) = 0;
  virtual ~AbstractVisitor() = 0;
};

#endif //ROMAN_NUMERALS_PATTERNVISITOR_ABSTRACTVISITOR_H_
