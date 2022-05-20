
#include "delivery.h"
#include<cstring>

#define SIZE 2

delivery::delivery()
{
	delivery_id = 0;
	strcpy(delivery_address, "");
	customer_contact_number = 0;
	delivary_person_id = 0;
}
 delivery::delivery(int dp1,int dp2)
          {
            dp[0] = new Deliveryperson(dp1);
            dp[1] = new Deliveryperson(dp2);
          }

void delivery::deliveryDetails( const char d_add[], int c_con, int dp_id,payment *cpay,Deliveryperson *delip)
{
	strcpy(delivery_address, d_add);
	customer_contact_number = c_con;
	delivary_person_id = dp_id;
}
void delivery::deleteDeliveryDetails()
{
}
void  delivery::UpdateDeliveryDetails()
{
}
void  delivery::displayDeliveryDetails()
{

}
delivery::~delivery()
{
  //distuctor
}