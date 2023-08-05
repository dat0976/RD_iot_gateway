
#include "../db/Db.h"
#include "../util/Util.h"

void Gateway::on_message(string data)
{
    Db *data = new Db();
    data->execute();
    Util::convertString2Int();
}