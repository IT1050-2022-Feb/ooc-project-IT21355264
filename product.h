#include "supllier.h"
class Product
{
protected:
	int productID;
	char productName[50];
	char productType[30];
	char productBrand[50];
	double price;
public:
	Product();
	Product(int tproductID,char tproductName[],char tproductType[],char tproductBrand[],double tprice);
	void displayProductDetails();
	void productType();
	void productBrand();
	~UnregisterdCustomer();
}