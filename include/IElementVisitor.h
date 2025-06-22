#ifndef IELEMENTVISITOR_H
#define IELEMENTVISITOR_H

class ConcreteElementA;
class ConcreteElementB;
class ConcreteElementC;

class IElementVisitor {
public:
    virtual ~IElementVisitor() = default;
    virtual void visit(ConcreteElementA& element) = 0;
    virtual void visit(ConcreteElementB& element) = 0;
    virtual void visit(ConcreteElementC& element) = 0;
};

#endif // IELEMENTVISITOR_H
