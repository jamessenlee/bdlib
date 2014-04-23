#ifndef VALID_UNIT_SITE_TABLE_DEFS_H
#define VALID_UNIT_SITE_TABLE_DEFS_H

#include "table_base.h"

//∂‘”¶
//define udf check_is_valid(valid_status) {
//  valid_status.status = true;
//}
//
//create Table ValidValidUnitSiteTable as SELECT Unit_id,site_id
//FROM ValidUnitTable,ValidUnitSiteTable 
//WHERE ValidUnitTable.unit_id = ValidUnitSiteTable.unit_id
//AND
//check_is_valid(ValidUnitTable.valid_status)  -- udf
//}
//CREATE UNIQUE INDEX unitid_index
//ON ValidValidUnitSiteTable (unit_id,site_id) -- sql
//CREATE CLUST INDEX unitid_siteid_index
//ON ValidUnitSiteTable (unit_id,CLUSTER(site_id)) ---not sql

class LibValidUnitSiteTable : public ITable{
public:    
    LibValidUnitSiteTable();
    virtual ~LibValidUnitSiteTable();

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
    bool insert(uint32_t unit_id,uint32_t site_id);

    //parameter number and type defined at compiler time
    bool earse(uint32_t unit_id,uint32_t site_id);

    //parameter number and type defined at compiler time
    bool earse(uint32_t unit_id);

    void* get_table() const {return _p_table;}

private:
    void* _p_table;
};

#endif
