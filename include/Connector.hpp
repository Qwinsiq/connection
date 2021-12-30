#pragma once
#include <memory>
#include "car.hpp"
#include "phone.hpp"

namespace car
{
    class Connector
    {
        public:
        bool getConnection(Phone phone);
        void reciveTask(std::string track);
        Connector(Car car);
        private:

        bool usb;
        bool bluetooth;
        bool aux;
        bool is_connection;
        std::shared_ptr<Car> ptr_car;
        std::shared_ptr<Phone> ptr_phone;
    };
}