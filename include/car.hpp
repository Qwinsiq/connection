#include "media.hpp"
#include "Connector.hpp"
#include <memory>
namespace car
{

    class Car
    {
    public:
    Car(std::string _name);
    void playMusic(std::string track);
    private:
    std::string name;
        Media media;
        Connector connector;
    };

}
