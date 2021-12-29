#pragma once
#include <memory>
#include "car.hpp"
namespace car
{
    class Connector
    {
        bool getConnection();

        private:

        bool usb;
        bool bluetooth;
        bool aux;
        bool is_connection;
        std::unique_ptr<Car> ptr_car;
        std::unique_ptr<Phone> ptr_phone;
    };
}