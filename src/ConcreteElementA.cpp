#include "ConcreteElementA.h"
#include "IElementVisitor.h"

void ConcreteElementA::accept(IElementVisitor& visitor) {
    visitor.visit(*this);
}
