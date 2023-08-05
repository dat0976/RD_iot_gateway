#include "Db.h"

/**
 * Table Device
 * id | addr | type | version | protocol | data
*/

int ReadDbDevice()
{
    // doc all ban ghi trong bang Device
}

int AddDevice2DeviceTable(Device * device)
{
    // string sql = "INSERT INTO Device (id, addr, type, version, protocol, data) VALUES ("+device->GetId()+"")";
    execute(sqlite);
}

int DelDevice(Device * device){
    string sql = 'DELETE FROM Device WHERE id = '+device->GetId()+'";';
}

int UpdateAddr(Device *device)
{

}

