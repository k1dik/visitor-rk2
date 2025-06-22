#include <gtest/gtest.h>
#include "ConcreteElementA.h"
#include "ConcreteElementB.h"
#include "ConcreteElementC.h"
#include "ConcreteVisitor.h"

TEST(ConcreteElementATest, AcceptTest) {
    ConcreteElementA elementA;
    ConcreteVisitor visitor;
    elementA.accept(visitor);
    SUCCEED();
}

TEST(ConcreteElementBTest, AcceptTest) {
    ConcreteElementB elementB;
    ConcreteVisitor visitor;
    elementB.accept(visitor);
    SUCCEED();
}

TEST(ConcreteElementCTest, AcceptTest) {
    ConcreteElementC elementC;
    ConcreteVisitor visitor;
    elementC.accept(visitor);
    SUCCEED();
}

int main(int argc, char **argv) {   // <<< Это и есть точка входа для тестов
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
