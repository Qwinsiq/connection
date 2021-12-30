#include "Connector.hpp"
#include "phone.hpp"

namespace car
{
    Connector::Connector(Car car)
    {
        ptr_car=std::make_shared<Car>();
        usb=false;
        aux=false;
        bluetooth=false;
        is_connection=false;
    }
    bool Connector::getConnection(Phone phone)
    {
        ptr_phone=std::make_shared<Phone>(phone);
        is_connection=true;
    }
    void Connector::reciveTask(std::string track)
    {
        ptr_car->playMusic(track);
    }

}