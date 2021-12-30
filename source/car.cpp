#include "car.hpp"
#include "Connector.hpp"

namespace car
{
    Car::Car(std::string _name):connector(*this),media()
    {
        name=_name;
    }
    void Car::playMusic(std::string track)
    {
        media.playSong(track);
    }

}