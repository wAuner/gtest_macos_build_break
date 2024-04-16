#include <gtest/gtest.h>
#include <chrono>


TEST(ChronoTest, Failing) {

    auto t1 = std::chrono::system_clock::now();
    ASSERT_EQ(t1, t1) << "fun" << t1.time_since_epoch().count();
}
