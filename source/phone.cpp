#include "phone.hpp"
namespace car
{
    Phone::Phone(std::string name)
    {
        _name=name;
        counter=0;
        std::string temp="Track ";
        for(int i=0;i<10;i++)
        {
            playlist.push_back(temp+std::to_string(i));
        }
        ptr_connector=nullptr;
    }
    void Phone::playSong()
    {
        if(ptr_connector==nullptr)
        std::cout<<" Is plaing "<< playlist[counter]<<std::endl;
        else if(ptr_connector!=nullptr)
        {
            ptr_connector->reciveTask(playlist[counter]);
        }
    }
    void Phone::nextSong()
    {
        counter++;
        playSong();
    }
}