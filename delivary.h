#include "payment.h"
#include "delivery_p.h"

#define SIZE 2

class delivery
{
protected:
	int delivery_id;
	char delivery_address[50];
	int customer_contact_number;
private:
	int delivary_person_id;

	payment* payment;
	delivery_p* dp[SIZE];

public:
	delivery();
	delivery(int dp1, int dp2, payment* pay);
	void deliveryDetails(int d_id, const char d_add[], int c_con, int dp_id, payment* pay);
	void deleteDeliveryDetails();
	void  UpdateDeliveryDetails();
	void  displayDeliveryDetails();
	~delivery();

};
