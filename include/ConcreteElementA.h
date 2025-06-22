#ifndef CONCRETEELEMENTA_H
#define CONCRETEELEMENTA_H

#include "IElement.h"

class ConcreteElementA : public IElement {
public:
    void accept(IElementVisitor& visitor) override;
};

#endif // CONCRETEELEMENTA_H
