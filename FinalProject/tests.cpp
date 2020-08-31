//aleksander brown
//alekjbrown@live.com
//July 13,2020

#include "engine.cpp"
#include <gtest/gtest.h>

TEST(EngineTest, PosititveNos)
{
    Engine e(0, 4, 136);
    ASSERT_EQ(69.36, e.getMinPumpSize());
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}