#pragma once
#include "payment.h" 
#include "Deliveryperson.h"

#define SIZE 2

class delivery
{
protected:
    	int delivery_id;
    	char delivery_address[50];
    	int customer_contact_number;

private:
	    int delivary_person_id;

    	payment *pay[SIZE];
    	Deliveryperson *dp[SIZE];

public:
    
      delivery();
      delivery(int dp1,int dp2);
    	void deliveryDetails( const char d_add[], int c_con, int dp_id,payment *cpay,Deliveryperson *delip);
    	void deleteDeliveryDetails();
    	void  UpdateDeliveryDetails();
    	void  displayDeliveryDetails();
    	~delivery();

};