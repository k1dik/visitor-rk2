#include <gtest/gtest.h>
#include "ConcreteElementA.h"
#include "ConcreteElementB.h"
#include "ConcreteElementC.h"

TEST(ElementTest, ElementACreation) {
    ConcreteElementA elem;
    SUCCEED();
}

TEST(ElementTest, ElementBCreation) {
    ConcreteElementB elem;
    SUCCEED();
}

TEST(ElementTest, ElementCCreation) {
    ConcreteElementC elem;
    SUCCEED();
}
