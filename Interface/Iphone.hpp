
namespace car
{

    class Connector;
    class IPhone
    {
        public:
        virtual void playSong()=0;
        virtual void nextSong()=0;
        virtual bool getConnection(Connector* connector)=0;
    };
}