#include "valid_unit_site_table_defs.h"
#include "table_defs.h"

LibValidUnitSiteTable::LibValidUnitSiteTable()
    : _p_table(NULL)
{
    _p_table = new ValidUnitSiteTable();
}

LibValidUnitSiteTable::~LibValidUnitSiteTable()
{
    if (_p_table != NULL) {
        delete (static_cast<ValidUnitSiteTable*> (_p_table));
    }
    _p_table = NULL;

}

bool LibValidUnitSiteTable::init(TableManager* mgr)
{
    (static_cast<ValidUnitSiteTable*> (_p_table))->init();
    mgr->register_table("valid_unit_site_table",this);

    
    ValidUnitSiteCon* con = new (std::nothrow) ValidUnitSiteCon(
            (static_cast<ValidUnitSiteTable*>(_p_table)),
            (static_cast<ValidUnitTable*>(mgr->get_table("valid_unit_table")->get_table())),
            (static_cast<UnitSiteTable*>(mgr->get_table("unit_site_table")->get_table()))

            );

    con->connect();


    return true;
}

size_t LibValidUnitSiteTable::mem()
{
    return (static_cast<ValidUnitSiteTable*> (_p_table))->mem();
}

size_t LibValidUnitSiteTable::size()
{
    return (static_cast<ValidUnitSiteTable*> (_p_table))->size();
}

void LibValidUnitSiteTable::dump()
{
    return;
}

bool LibValidUnitSiteTable::load()
{
    return true;
}

bool LibValidUnitSiteTable::update()
{
    return true;
}

const char* LibValidUnitSiteTable::desc()
{
    return "LibValidUnitSiteTable";
}

ITable* LibValidUnitSiteTable::clone()
{
    return this;
}

ITable& LibValidUnitSiteTable::operator=(ITable& rhs)
{
    return *this;
}

bool LibValidUnitSiteTable::insert(uint32_t unit_id,uint32_t site_id)
{
    (static_cast<ValidUnitSiteTable*> (_p_table))->insert(unit_id,site_id);
    return true;
}

//parameter number and type defined at compiler time
bool LibValidUnitSiteTable::earse(uint32_t unit_id,uint32_t site_id)
{
    (static_cast<ValidUnitSiteTable*> (_p_table))->erase<UNIT_ID,SITE_ID>(unit_id,site_id);
    return true;
}

//parameter number and type defined at compiler time
bool LibValidUnitSiteTable::earse(uint32_t unit_id)
{
    (static_cast<ValidUnitSiteTable*> (_p_table))->erase<UNIT_ID>(unit_id);
 
    return true;
}


