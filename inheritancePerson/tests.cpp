//tests.cpp
#include "person.cpp"
#include "student.cpp"
#include <gtest/gtest.h>

TEST(PersonTest, PositiveNos)
{
    Person p("alek","brown","mr");
    ASSERT_EQ("mr alek brown",p.print());
}

TEST(PersonTest, NegativeNos)
{
    Person p("alek","brown","mr");
    ASSERT_EQ("bob", p.print());
}

TEST(StudentTest, PositiveNos)
{
    Student s("alek","brown","mr","cis");
    ASSERT_EQ("mr alek brown cis", s.print());
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}