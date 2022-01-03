#include "media.hpp"
#include <iostream>
namespace car
{
    Media::Media()
    { 
        media_type= enums::typeOfMedia::radio;
        std::cout<<"radio is plaing \n";
    }
    void Media::swithTypeOfMedia()
    {
        if(media_type==enums::typeOfMedia::radio)
        media_type=enums::typeOfMedia::player;
        if(media_type==enums::typeOfMedia::player)
        {
            media_type==enums::typeOfMedia::radio;
            std::cout<<"radio is plaing \n";
        }
    }
    void Media::playSong(std::string track)
    {
        std::cout<<"playing track "<<track<<std::endl;
    }
}