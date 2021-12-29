#pragma once
#include <memory>
#include "Connector.hpp"
#include <vector>
#include<string>
namespace car
{

    class Phone
    {
        public:
        void playSong();
        void nextCar();
        private:
        std
        std::unique_ptr<Connector> ptr_connector;
        std::vector<std::string> playlist;
        
    };
}