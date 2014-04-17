#include "table_defs.h"
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

bool LibUnitSiteTable::init()
{
    (static_cast<UnitSiteTable*> (_p_table))->init();
    return true;
}

