#pragma once
#include <memory>
#include <optional>
#include "car.hpp"
#include "phone.hpp"
#include "Iconnector.hpp"
namespace car
{
    class Car;
    class Connector:public IConnector
    {
        public:
        bool getConnection(car::Phone* phone) override;
        void reciveTask(std::string track) override;
        Connector(Car* car);

        private:

        bool usb;
        bool bluetooth;
        bool aux;
        bool is_connection;
        car::Car* ptr_car;
        car::Phone* ptr_phone;
    };
}