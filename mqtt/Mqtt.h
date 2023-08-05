#include <mosquitto.h>

class Mqtt
{
    string host;
    int port;
    string user;
    string password;
    string top_sub;

    public:
    void init();
    void sub();

    void pub(string topic, string message);
    virtual on_message(string message);
}