#ifndef CONCRETEELEMENTB_H
#define CONCRETEELEMENTB_H

#include "IElement.h"

class ConcreteElementB : public IElement {
public:
    void accept(IElementVisitor& visitor) override;
};

#endif // CONCRETEELEMENTB_H
