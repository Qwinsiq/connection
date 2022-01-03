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
    void Car::playMusic(std::string track)
    {
        media->playSong(track);
    }
    void Car::findPhone(Phone& phone)
    {
        connector->getConnection(&phone);
    }

}