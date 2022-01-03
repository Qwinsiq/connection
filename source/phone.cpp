#include "phone.hpp"
namespace car
{
    Phone::Phone(std::string name)
    {
        _name = name;
        ptr_connector=nullptr;
        counter = 0;
        is_connection = false;
        std::string temp = "Track ";
        for (int i = 0; i < 10; i++)
        {
            playlist.push_back(temp + std::to_string(i));
        }
    }
    void Phone::playSong()
    {
        std::cout<<is_connection<<std::endl;
        if (is_connection)
        {
            ptr_connector->reciveTask(playlist[counter]);
        }
        else
        {
            std::cout << " Is plaing  on phone " << playlist[counter] << std::endl;
        }
    }
    void Phone::nextSong()
    {
        counter++;
        playSong();
    }
    void Phone::getConnection(Connector* connector)
    {
        ptr_connector=connector;
        is_connection = true;
        std::cout << "conected " << is_connection << std::endl;
    }

}