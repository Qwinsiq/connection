#include <gmock/gmock.h>
#include <Iphone.hpp>

class PhoneMock:public car::IPhone
{
public:
MOCK_METHOD(bool, getConnection,(car::Connector* connector), (override));
MOCK_METHOD(void, nextSong, (), (override));
MOCK_METHOD(void, playSong, (), (override));
};