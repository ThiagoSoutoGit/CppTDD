#include <string>
#include <gtest/gtest.h>

//Production Code
int string_length(std::string theStr) {
    return theStr.length();
}

// A Unit test
TEST(StringLengthTests, SimpleTest) {
    std::string testStr = "1";
    int result = string_length("1");
    GTEST_ASSERT_EQ(1, result);
}

