#include "delivery.h"
#include "delivery_p.h"
#include <iostream>
#include <cstring>

#define SIZE 2

using namespace std;

delivery::delivery()
{
	delivery_id = 0;
	strcpy_s(delivery_address, "");
	customer_contact_number = 0;
	delivary_person_id = 0;
}
delivery::delivery(int dp1, int dp2, payment* pay)
{
	dp[0] = new delivery_p(dp1);
	dp[1] = new delivery_p(dp2);
	payment = pay;

}
void delivery::deliveryDetails(int d_id, const char d_add[], int c_con, int dp_id, payment* pay)
{
	delivery_id = d_id;
	strcpy_s(delivery_address, d_add);
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
	for (int i = 0; i <= SIZE; i++)
	{
		delete delivery_p[i];
	}

};