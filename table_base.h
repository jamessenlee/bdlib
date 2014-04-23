#ifndef TABLE_BASE_H
#define TABLE_BASE_H
#include <stdint.h>
#include "string"
#include "map"

class ITable;
class TableManager {
public:
    bool register_table(std::string name,ITable* table) {
        _table_map[name] = table;
        return true;
    }

    ITable* get_table(std::string name) {
        std::map<std::string,ITable*>::iterator iter = _table_map.find(name);

        if (iter!=_table_map.end()) {
            return iter->second;
        }
        return NULL;
    }


private:    
    std::map<std::string,ITable*> _table_map;
};

class ITable {
public:
    ITable(){}
    virtual ~ITable(){}
    virtual bool init(TableManager*) = 0;
    virtual bool update() = 0;
    virtual size_t mem() = 0;
    virtual size_t size() = 0;
    virtual void dump() = 0;
    virtual bool load() = 0;
    virtual const char* desc() = 0;
    virtual ITable* clone() = 0;
    virtual ITable& operator=(ITable& rhs) = 0;
    virtual void* get_table() const = 0;

private:

};
#if 0
class ITableIterator
{
public:
    virtual ITableIterator& operator++(){};
    virtual ItableIterator& operator++(int) {}

};
#endif


#endif
