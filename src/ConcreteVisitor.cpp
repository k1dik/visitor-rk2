#include "ConcreteVisitor.h"
#include "ConcreteElementA.h"
#include "ConcreteElementB.h"
#include "ConcreteElementC.h"

void ConcreteVisitor::visit(ConcreteElementA& element) {
    std::cout << "Visited ConcreteElementA" << std::endl;
}

void ConcreteVisitor::visit(ConcreteElementB& element) {
    std::cout << "Visited ConcreteElementB" << std::endl;
}

void ConcreteVisitor::visit(ConcreteElementC& element) {
    std::cout << "Visited ConcreteElementC" << std::endl;
}
