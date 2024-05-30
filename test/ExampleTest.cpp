#include <Example.h>
#include <gtest/gtest.h>

using namespace MyProject;

TEST(SampleTest, HelloWorld) {
    auto example = new Example();
    EXPECT_TRUE(true);
}
