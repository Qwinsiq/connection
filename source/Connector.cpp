#include "Connector.hpp"
#include "phone.hpp"

namespace car
{
    Connector::Connector(Car* car)
    {
        ptr_car=car;
        ptr_phone=nullptr;
        usb=false;
        aux=false;
        bluetooth=false;
        is_connection=false;
    }
    bool Connector::getConnection(Phone* phone)
    {
        ptr_phone=phone;
        is_connection=true;
        ptr_phone->getConnection(this);
        std::cout<<"connection is on \n";
        return true;
    }
    void Connector::reciveTask(std::string track)
    {
        ptr_car->playMusic(track);
    }

}