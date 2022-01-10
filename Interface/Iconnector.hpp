#pragma once
#include <string>
namespace car
{
    class Phone;
    class IConnector
    {
        public:
        virtual bool getConnection(car::Phone* phone)=0;
        virtual void reciveTask(std::string track)=0;
    };
}