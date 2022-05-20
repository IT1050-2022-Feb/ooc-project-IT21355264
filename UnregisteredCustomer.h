#pragma once
#include "Product.h"
#define size 2

class UnregisterdCustomer
{
protected:
	int custNIC;
	char custName[50];
	char custAddress[30];
	char custEmail[50];
	int custMobile;

public:
	UnregisterdCustomer();
	UnregisterdCustomer(int unr_NIC,const char unr_name[],const char unr_address[],const char unr_email[],int unr_mobi);
	void displayDetails();
	~UnregisterdCustomer();
};