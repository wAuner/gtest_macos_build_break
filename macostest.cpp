#include <gtest/gtest.h>
#include <chrono>


TEST(ChronoTest, CompileBreakBelowMacOS133) {

    auto t1 = std::chrono::system_clock::now();
    ASSERT_EQ(t1, t1);
}

TEST(ChronoTest, Success) {

    auto t1 = std::chrono::system_clock::now();
    ASSERT_EQ(t1.time_since_epoch().count(), t1.time_since_epoch().count());
}