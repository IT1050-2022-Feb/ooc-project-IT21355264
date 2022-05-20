#include"order.h"
#include <cstring>

order::order()
{
  orderID=0;
  orderNo=0;
  orderQty=0;
  strcpy(orderDate,"");
}
order:: order(int o_ID,int oNo,int qty,const char o_date[])
{
  orderID=
  orderNo =oNo;
  orderQty = qty;
}
void order::update_order()
{
  
}
void order::remove_order()
{
  
}
double order:: getTotal()
{
  
}