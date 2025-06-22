#ifndef CONCRETEELEMENTC_H
#define CONCRETEELEMENTC_H

#include "IElement.h"

class ConcreteElementC : public IElement {
public:
    void accept(IElementVisitor& visitor) override;
};

#endif // CONCRETEELEMENTC_H
