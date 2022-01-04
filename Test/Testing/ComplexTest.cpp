#include <gtest/gtest.h>
#include <phone.hpp>
#include <car.hpp>
//#include <gmock/gmock.h>
/* class CarTest : public ::testing::Test
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
}; */

TEST (CarTest, GetConnectionTrue)
{
    car::Car* vaz= new car::Car{"kalina"};
    car::Phone* mot=new car::Phone{"mototola"};
    EXPECT_TRUE(vaz->findPhone(*mot));
}