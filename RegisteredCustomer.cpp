#include "RegisteredCustomer.h"
#include "UnregisteredCustomer.h"
#include <cstring>
//constructor
RegisteredCustomer::RegisteredCustomer()
{
	custID=0;
	strcpy(userName,"");
	strcpy(password,"");
}
//overloaded constructor
RegisteredCustomer::RegisteredCustomer(int rcu_ID,const char ru_Name[],const char rc_password[],int unr_NIC,const char unr_name[],const char unr_address[],const char unr_email[],int unr_mobi)
{
	custID=rcu_ID;
	strcpy(userName,ru_Name);
	strcpy(password,rc_password);
}
void RegisteredCustomer::displayDetails()
{
	
}
void RegisteredCustomer::login()
{
	
}
void RegisteredCustomer::checkLoginDetails()
{
	
}
RegisteredCustomer::~RegisteredCustomer()
{
	//Destructor
}