#include<stdio.h>
#include"unit_site_table_defs.h"
#include "valid_unit_table_defs.h"
#include "table_defs.h"
#include "valid_unit_site_table_defs.h"

int main()
{
    TableManager mgr;
    LibUnitSiteTable us_table;
    us_table.init(&mgr);
    us_table.insert(1,1);

    us_table.insert(2,3);
    printf("size:%lu,us[%p]\n",us_table.size(),&us_table);

    LibValidUnitTable vs_table;
    ValidStatus st;
    vs_table.init(&mgr);
    vs_table.insert(1,st);
    vs_table.insert(2,st);

    printf("size:%lu,vs[%p]\n",vs_table.size(),&vs_table);

    LibValidUnitSiteTable vus_table;
    vus_table.init(&mgr);

    printf("size:%lu\n",vus_table.size());



 

    return 0;
}
