#include "UnregisteredCustomer.h"

class RegisteredCustomer:public UnregisterdCustomer 
{
protected:
      	int custID;
      	char userName[50];
      	char password[30];

public:
    	RegisteredCustomer();
    	RegisteredCustomer(int rcu_ID,const char ru_Name[],const char rc_password[],int unr_NIC,const char unr_name[],const char unr_address[],const char unr_email[],int unr_mobi);
    	void displayDetails();
    	void login();
    	void checkLoginDetails();
    	~RegisteredCustomer();
};