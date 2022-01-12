#pragma once
#include "media.hpp"
#include "Connector.hpp"
#include "Iconnector.hpp"
#include "phone.hpp"
#include <memory>
namespace car
{
    class Phone;
    class Car
    {
    public:
    Car(std::string _name);
    Car(std::string _name, car::IConnector* _connector);
    virtual ~Car();
    bool findPhone(car::Phone& phone);
    void playMusic(std::string track);
    private:
    std::string name;
        Media* media;
        IConnector* connector;
    };

}
