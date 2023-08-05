
#include "Device.h"

Device::Device()
{
}

Device::Device(string id, uint32_t addr, uint32_t type, string data)
{
    this->id = id;
}

Device::~Device()
{
}

Device device = new Device("dat", 123, 123, "nam");

string Device::GetId()
{
    return this->id;
}

int Device::SetId(string id)
{
    this->id = id;
    return 0;
}