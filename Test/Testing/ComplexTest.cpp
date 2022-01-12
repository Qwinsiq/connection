#include "gtest/gtest.h"
#include <phone.hpp>
#include <car.hpp>
//#include <gmock/gmock.h>
 class CarTest : public ::testing::Test
{
protected:
    void SetUp()
    {
        car = new car::Car("vaz");
        phone = new car::Phone("motorola");
    }
    void TearDown()
    {
        delete car;
        delete phone;
    }
    car::Car *car;
    car::Phone *phone;
}; 

TEST_F(CarTest, GetConnectionFalse)
{
    car::Phone* phone2=new car::Phone("LG");
    EXPECT_TRUE(car->findPhone(*phone));
    EXPECT_FALSE(car->findPhone(*phone2));
    delete phone2;
}


TEST_F(CarTest, GetConnectiontrue)
{
    EXPECT_TRUE(car->findPhone(*phone));
}

