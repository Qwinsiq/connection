#include "gmock/gmock.h"
#include "gtest/gtest.h"
#include "car.hpp"
#include "phone.hpp"
#include "ConnectorMock.hpp"
#include <memory>

using ::testing::StrictMock;
using ::testing::Return;
class TestCompex:public testing::Test
{
    protected:
    void SetUp() override
    {
     con=new StrictMock<ConnectorMock>();   
     car= new car::Car("vaz", con);
    }
    void TearDown() override
    {
        delete con;
        delete car;
        delete phone;
    }
    StrictMock<ConnectorMock>* con;
    car::Car* car;
    car::Phone* phone;
};
TEST_F(TestCompex, getConnectionTrue)
{
    EXPECT_CALL(*con, getConnection).WillOnce(Return(true));
    EXPECT_TRUE(car->findPhone(*phone));
}