#include "ConcreteElementA.h"
#include "ConcreteElementB.h"
#include "ConcreteElementC.h"
#include "ConcreteVisitor.h"

int main() {
    ConcreteElementA a;
    ConcreteElementB b;
    ConcreteElementC c;
    ConcreteVisitor visitor;

    a.accept(visitor);
    b.accept(visitor);
    c.accept(visitor);

    return 0;
}
