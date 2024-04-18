#include <gtest/gtest.h>
#include <vector>
#include <string>

const char* GetHelloString(){   
  static char hello_string[] = "Hello";
    return hello_string;
}

TEST(GetHelloString, BasicAssertions){    
    EXPECT_STREQ(GetHelloString(), "Hello") << "No way, no way!";
    EXPECT_EQ(7 * 6, 42);
    EXPECT_EQ(7 * 5, 35);
    EXPECT_EQ(7 * 4, 28);
}

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
  // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  EXPECT_EQ(7 * 6, 42);
}