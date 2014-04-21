#ifndef VALID_UNIT_TABLE_DEFS_H
#define VALID_UNIT_TABLE_DEFS_H

#include "table_base.h"

//∂‘”¶
//struct VALID_UNIT_STAT
//
//create Table ValidUnitTable
//{
//unit_id int,
//vaild_status VALID_UNIT_STAT
//}
//CREATE UNIQUE INDEX unitid_index
//ON UnitSiteTable (unit_id) -- sql

struct ValidStatus
{
    bool status;
};

class LibValidUnitTable : public ITable{
public:    
    LibValidUnitTable();
    virtual ~LibValidUnitTable();

    bool init(TableManager*);

    size_t mem();
    size_t size();
    void dump();
    bool load();
    bool update();
    const char* desc();
    ITable* clone();
    ITable& operator=(ITable& rhs);

    //parameter number and type defined at compiler time
    bool insert(uint32_t unit_id,const ValidStatus& status);

    //parameter number and type defined at compiler time
    bool earse(uint32_t unit_id);


private:
    void* _p_table;
};

#endif
