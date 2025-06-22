#ifndef IELEMENT_H
#define IELEMENT_H

class IElementVisitor;

class IElement {
public:
    virtual ~IElement() = default;
    virtual void accept(IElementVisitor& visitor) = 0; // убрали const
};

#endif // IELEMENT_H
