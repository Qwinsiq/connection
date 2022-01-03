#pragma once
#include "Connector.hpp"
#include <vector>
#include <string>
#include <iostream>
namespace car
{
    class Connector;
    class Phone
    {
    public:
        Phone(std::string name);

        void playSong();
        void nextSong();
        void getConnection(Connector* connector);

    private:
        std::string _name;
        int counter;
        bool is_connection;
        Connector* ptr_connector;
        std::vector<std::string> playlist;
    };
}