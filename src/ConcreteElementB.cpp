#include "ConcreteElementB.h"
#include "IElementVisitor.h"

void ConcreteElementB::accept(IElementVisitor& visitor) {
    visitor.visit(*this);
}
