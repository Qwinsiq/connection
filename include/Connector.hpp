#pragma once
#include <memory>
#include <optional>
#include "car.hpp"
#include "phone.hpp"

namespace car
{
    class Car;
    class Connector
    {
        public:
        bool getConnection(Phone* phone);
        void reciveTask(std::string track);
        Connector(Car* car);
        
        private:

        bool usb;
        bool bluetooth;
        bool aux;
        bool is_connection;
        Car* ptr_car;
        Phone* ptr_phone;
    };
}