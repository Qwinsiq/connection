#include "car.hpp"
#include "phone.hpp"

int main()
{
   car::Car vaz=car::Car("VAZ");
   car::Phone nokia=car::Phone("Nokia");
   std::cout<<" program is workig\n";
   //vaz.findPhone(nokia);
   nokia.playSong();
   nokia.nextSong();
}