find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS} ../include)

add_executable(unit_tests unit_tests.cpp)
target_link_libraries(unit_tests visitor ${GTEST_LIBRARIES} pthread)

add_test(NAME unit_tests COMMAND unit_tests)
