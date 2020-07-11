//tests.cpp

#include "Ship.cpp"
#include "CruiseShip.cpp"
#include "CargoShip.cpp"
#include <gtest/gtest.h>

TEST(ShipTest, PositiveNos)
{
    Ship s("boaty","1987");
    ASSERT_EQ("Name = boaty, year = 1987",s.print());
}

TEST(CruiseShipTest, PositiveNos)
{
    CruiseShip cs("McBoat","1987",15);
    ASSERT_EQ("Name = McBoat, Max Passengers = 15",cs.print());
}

TEST(CargoShipTest, PositiveNos)
{
    CargoShip c("face","1987",12000);
    ASSERT_EQ("Name = face, Max cargo = 12000",c.print());
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}