#ifndef CONCRETEVISITOR_H
#define CONCRETEVISITOR_H

#include "IElementVisitor.h"
#include <iostream>

class ConcreteVisitor : public IElementVisitor {
public:
    void visit(ConcreteElementA& element) override;
    void visit(ConcreteElementB& element) override;
    void visit(ConcreteElementC& element) override;
};

#endif // CONCRETEVISITOR_H
