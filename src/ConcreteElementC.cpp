#include "ConcreteElementC.h"
#include "IElementVisitor.h"

void ConcreteElementC::accept(IElementVisitor& visitor) {
    visitor.visit(*this);
}
