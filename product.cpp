#include "Product.h"
#include "Product.h"
#include <cstring>

//Constructor
Product::Product()
{
	productID=0;
	strcpy(productName,"");
	strcpy(productType,"");
	strcpy(productBrand,"");
	price=0.0;
}
//Overloaded Constructor
Product::Product(int rproductID,char rproductName[],char rproductType[],char rproductBrand,double rprice)
{
	productID=rproductID;
	strcpy(productName,rproductName);
	strcpy(productType,rproductType);
	strcpy(productBrand,rproductBrand);
	price=rprice;
}
void Product::displayDetails()
{
	
}
char[] Product::productType()
{
	return productType;
}
char[] Product::productBrand()
{
	return productBrand;
}
Product::~Product()
{
	//Destructor
}