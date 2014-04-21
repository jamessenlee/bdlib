#include "unit_site_table_defs.h"
#include <smalltable2.hpp>

DEFINE_ATTRIBUTE(UNIT_ID, uint32_t);
DEFINE_ATTRIBUTE(SITE_ID, uint32_t);

typedef ST_TABLE(
        UNIT_ID, SITE_ID,
        ST_UNIQUE_KEY(UNIT_ID, ST_CLUSTER_KEY(SITE_ID)),
        ST_UNIQUE_KEY(UNIT_ID, SITE_ID)) UnitSiteTable;

LibUnitSiteTable::LibUnitSiteTable()
    : _p_table(NULL)
{
    _p_table = new UnitSiteTable();
}

LibUnitSiteTable::~LibUnitSiteTable()
{
    if (_p_table != NULL) {
        delete (static_cast<UnitSiteTable*> (_p_table));
    }
    _p_table = NULL;

}

bool LibUnitSiteTable::init(TableManager* mgr)
{
    (static_cast<UnitSiteTable*> (_p_table))->init();
    mgr->register_table("unit_site_table",this);
    return true;
}

size_t LibUnitSiteTable::mem()
{
    return (static_cast<UnitSiteTable*> (_p_table))->mem();
}

size_t LibUnitSiteTable::size()
{
    return (static_cast<UnitSiteTable*> (_p_table))->size();
}

void LibUnitSiteTable::dump()
{
    return;
}

bool LibUnitSiteTable::load()
{
    return true;
}

bool LibUnitSiteTable::update()
{
    return true;
}

const char* LibUnitSiteTable::desc()
{
    return "LibUnitSiteTable";
}

ITable* LibUnitSiteTable::clone()
{
    return this;
}

ITable& LibUnitSiteTable::operator=(ITable& rhs)
{
    return *this;
}

bool LibUnitSiteTable::insert(uint32_t unit_id,uint32_t site_id)
{
    (static_cast<UnitSiteTable*> (_p_table))->insert(unit_id,site_id);
    return true;
}

//parameter number and type defined at compiler time
bool LibUnitSiteTable::earse(uint32_t unit_id,uint32_t site_id)
{
    (static_cast<UnitSiteTable*> (_p_table))->erase<UNIT_ID,SITE_ID>(unit_id,site_id);
    return true;
}

//parameter number and type defined at compiler time
bool LibUnitSiteTable::earse(uint32_t unit_id)
{
    (static_cast<UnitSiteTable*> (_p_table))->erase<UNIT_ID>(unit_id);
 
    return true;
}


