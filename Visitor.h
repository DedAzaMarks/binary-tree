//
// Created by Maxim Bordyugov on 22/06/2021.
//

#ifndef ROMAN_NUMERALS_PATTERNVISITOR_VISITOR_H_
#define ROMAN_NUMERALS_PATTERNVISITOR_VISITOR_H_

#include "AbstractVisitor.h"

class Visitor : public AbstractVisitor {
 public:
  long long int visit(NumberNode &) override;
  long long int visit(MinusNode &) override;
  long long int visit(AddNode &) override;
  long long int visit(SubNode &) override;
  long long int visit(MulNode &) override;
  long long int visit(DivNode &) override;

  void print(NumberNode &) override;
  void print(MinusNode &) override;
  void print(AddNode &) override;
  void print(SubNode &) override;
  void print(MulNode &) override;
  void print(DivNode &) override;
};

#endif //ROMAN_NUMERALS_PATTERNVISITOR_VISITOR_H_
