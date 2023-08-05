#ifndef DEVICE_H
#define DEVICE_H

#include <iostream>
#include <string>
#include <unistd.h>


class Device
{
    private:
    string id;
    uint32_t addr;
    stirg version;
    uint32_t type;
    string data;
    public:
    string GetId();
    void SetId(string id);

}

#endif