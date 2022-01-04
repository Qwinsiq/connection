#include "car.hpp"
#include "phone.hpp"

int main()
{
   
   car::Car* vaz= new car::Car("VAZ");
   car::Phone* nokia=new car::Phone("Nokia");
   std::cout<<" program is workig\n";
   vaz->findPhone(*nokia);
   nokia->playSong();
   nokia->nextSong();
}