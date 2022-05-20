#include "UnregisteredCustomer.h"
#include <cstring>

#define size 2
//constructor
UnregisterdCustomer::UnregisterdCustomer()
{
	custNIC=0;
	strcpy(custName,"");
	strcpy(custAddress,"");
	strcpy(custEmail,"");
	custMobile=0;
}
//overloaded constructor
UnregisterdCustomer::UnregisterdCustomer(int unr_NIC,const char unr_name[],const char unr_address[],const char unr_email[],int unr_mobi)
{
	custNIC=unr_NIC;
	strcpy(custName,unr_name);
	strcpy(custAddress,unr_address);
	strcpy(custEmail,unr_email);
	custMobile=unr_mobi;
}
void UnregisterdCustomer::displayDetails()
{
	
}
UnregisterdCustomer::~UnregisterdCustomer()
{
	//Destructor
}