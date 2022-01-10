#include "Connector.hpp"
#include "phone.hpp"

namespace car
{
    Connector::Connector(Car *car)
    {
        ptr_car = car;
        ptr_phone = nullptr;
        usb = false;
        aux = false;
        bluetooth = false;
        is_connection = false;
    }
    bool Connector::getConnection(Phone* phone)
    {
        if (phone->getConnection(this)&&!is_connection)
        {
            ptr_phone = phone;
            is_connection = true;
            return true;
        }
        else return false;
    }
    void Connector::reciveTask(std::string track)
    {
        ptr_car->playMusic(track);
    }

}