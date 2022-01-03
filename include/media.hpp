#pragma once
#include "enums.hpp"
#include <string>

namespace car
{
  class Media
  {
  public:
    Media();
    void playSong(std::string track);
    void swithTypeOfMedia();

  private:
    enums::typeOfMedia media_type;
  };
}