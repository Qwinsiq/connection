#pragma once
#include "media.hpp"
#include "Connector.hpp"
#include "phone.hpp"
#include <memory>
namespace car
{
    class Phone;
    class Connector;
    class Car
    {
    public:
    Car(std::string _name);
    void findPhone(car::Phone& phone);
    void playMusic(std::string track);
    private:
    std::string name;
        Media* media;
        Connector* connector;
    };

}
