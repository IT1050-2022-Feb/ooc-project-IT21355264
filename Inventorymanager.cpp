#include "Inventorymanager.h"
#include <cstring>

Inventorymanager::Inventorymanager()
{
     inventoryId=0;
  	 strcpy(inventorytype,"");
     strcpy(inventoryItems,"");
}
Inventorymanager::Inventorymanager(int i_id,const char in_type[],const char in_item[])
{
    inventoryId=0;
  	strcpy(inventorytype,in_type);
    strcpy(inventoryItems,in_item);
}
void Inventorymanager::addInvetory()
{
}
void Inventorymanager::deleteInvetory()
{
}
void Inventorymanager::searchInventory()
{	
}
 Inventorymanager::~Inventorymanager()
{
  
}