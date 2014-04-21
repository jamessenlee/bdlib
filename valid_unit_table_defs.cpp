#include "valid_unit_table_defs.h"
#include <smalltable2.hpp>


DEFINE_ATTRIBUTE(UNIT_ID, uint32_t);
DEFINE_ATTRIBUTE(VALID_STATUS, ValidStatus);

typedef ST_TABLE(
        UNIT_ID, VALID_STATUS,
        ST_UNIQUE_KEY(UNIT_ID)) ValidUnitTable;

LibValidUnitTable::LibValidUnitTable()
    : _p_table(NULL)
{
    _p_table = new ValidUnitTable();
}

LibValidUnitTable::~LibValidUnitTable()
{
    if (_p_table != NULL) {
        delete (static_cast<ValidUnitTable*> (_p_table));
    }
    _p_table = NULL;

}

bool LibValidUnitTable::init(TableManager* mgr)
{
    (static_cast<ValidUnitTable*> (_p_table))->init();
    mgr->register_table("valid_unit",this);
    return true;
}

size_t LibValidUnitTable::mem()
{
    return (static_cast<ValidUnitTable*> (_p_table))->mem();
}

size_t LibValidUnitTable::size()
{
    return (static_cast<ValidUnitTable*> (_p_table))->size();
}

void LibValidUnitTable::dump()
{
    return;
}

bool LibValidUnitTable::load()
{
    return true;
}

bool LibValidUnitTable::update()
{
    return true;
}

const char* LibValidUnitTable::desc()
{
    return "LibValidUnitTable";
}

ITable* LibValidUnitTable::clone()
{
    return this;
}

ITable& LibValidUnitTable::operator=(ITable& rhs)
{
    return *this;
}

bool LibValidUnitTable::insert(uint32_t unit_id,const ValidStatus& status)
{
    (static_cast<ValidUnitTable*> (_p_table))->insert(unit_id,status);
    return true;
}

//parameter number and type defined at compiler time
bool LibValidUnitTable::earse(uint32_t unit_id)
{
    (static_cast<ValidUnitTable*> (_p_table))->erase<UNIT_ID>(unit_id);
 
    return true;
}


