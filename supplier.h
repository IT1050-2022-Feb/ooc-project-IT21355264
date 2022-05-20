#include "Inventorymanager.h"
class supplier
{
protected:
  	int supplierID;
  	char supplierName[50];
  	int supplierMobilenumber;
  	char supplierEmail[50];

    Inventorymanager *inv;
	
public:
  	supplier();
  	supplier(int tsupplierID, char tsupplierName[], int tsupplierMobilenumber, char tsupplierEmail[],Inventorymanager *inv);
  	void  depositaddressdetails();
  	void enterproductdetails();
  	~supplier();
};