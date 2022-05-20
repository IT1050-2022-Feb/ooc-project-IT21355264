#include "supplier.h"
#include <cstring>

#define SIZE 2

supplier::supplier()
{
	supplierID = 0;
	strcpy(supplierName, "");
	supplierMobilenumber = 0;
	strcpy (supplierEmail, "");
}

supplier::supplier(int tsupplierID, char tsupplierName[], int tsupplierMobilenumber, char tsupplierEmail[],Inventorymanager *inv)
{
	supplierID = tsupplierID;
	strcpy(supplierName, tsupplierName);
	supplierMobilenumber = tsupplierMobilenumber;
	strcpy(supplierEmail, tsupplierEmail);
}
void supplier::depositaddressdetails()
{
}
void supplier::enterproductdetails()
{

}
supplier::~supplier()
{
	
}