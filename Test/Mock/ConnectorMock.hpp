#include <gmock/gmock.h>
#include "Iconnector.hpp"


class ConnectorMock:public car::IConnector
{
    public:
    MOCK_METHOD(bool, getConnection, (car::Phone* phone), (override));
    MOCK_METHOD(void, reciveTask,(std::string track), (override));
};