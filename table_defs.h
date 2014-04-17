#ifndef TABLE_DEFS_H
#define TABLE_DEFS_H

#include <stdint.h>

class LibUnitSiteTable{
public:    
    LibUnitSiteTable();
    virtual ~LibUnitSiteTable();

    bool init();

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
