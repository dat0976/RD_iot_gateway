#ifndef DB_H
#define DB_H

#include <sqlite3.h>
class Db
{
public:
    void init();
    void execute(string sql);
}

#endif