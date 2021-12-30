#pragma once
#include <memory>
#include "Connector.hpp"
#include <vector>
#include <string>
#include <iostream>
namespace car
{

    class Phone
    {
        public:
        Phone(std::string name);
        void playSong();
        void nextSong();
        private:
        std::string _name;
        int counter;
        std::shared_ptr<Connector> ptr_connector;
        std::vector<std::string> playlist;
        
    };
}