#ifndef UNIT_SITE_TABLE_DEFS_H
#define UNIT_SITE_TABLE_DEFS_H

#include "table_base.h"

//∂‘”¶
//create Table UnitSiteTable
//{
//unit_id int,
//site_id int
//}
//CREATE UNIQUE INDEX unitid_index
//ON UnitSiteTable (unit_id,site_id) -- sql
//CREATE CLUST INDEX unitid_siteid_index
//ON UnitSiteTable (unit_id,CLUSTER(site_id)) ---not sql

class LibUnitSiteTable : public ITable{
public:    
    LibUnitSiteTable();
    virtual ~LibUnitSiteTable();

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


private:
    void* _p_table;
};

#endif
