//
// Created by Maxim Bordyugov on 22/06/2021.
//

#ifndef TMP__VISITOR_H_
#define TMP__VISITOR_H_

#include "AbstractVisitor.h"

class Visitor : public AbstractVisitor {
 public:
  long long int visit(NumberNode &) override;
  long long int visit(MinusNode &) override;
  long long int visit(AddNode &) override;
  long long int visit(SubNode &) override;
  long long int visit(MulNode &) override;
  long long int visit(DivNode &) override;
  ~Visitor() override;
};

#endif //TMP__VISITOR_H_
