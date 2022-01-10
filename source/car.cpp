#include "car.hpp"
#include "Connector.hpp"

namespace car
{
    Car::Car(std::string _name)
    {
        connector=new Connector(this);
        media=new Media();
        name=_name;
    }
    Car::Car(std::string _name, car::IConnector* _connector)
    {
        name=_name;
        media=new Media();
        connector=_connector;
    }
    void Car::playMusic(std::string track)
    {
        media->playSong(track);
    }
    bool Car::findPhone(Phone& phone)
    {
        if(connector->getConnection(&phone)) return true;
        else return false;
    }

}