#pragma once
#include <vector>
#include <string>
#include <iostream>
#include <Iphone.hpp>
namespace car
{
    class Phone: public IPhone
    {
    public:
        Phone(std::string name);

        void playSong() override;
        void nextSong() override;
        bool getConnection(Connector* connector) override;

    private:
        std::string _name;
        int counter;
        bool is_connection;
        car::Connector* ptr_connector;
        std::vector<std::string> playlist;
    };
}