#include "Deliveryperson.h"
#include "RegisteredCustomer.h"
#include <cstring>


class feedback
{
private:
	char feedback_mzg[100];
    
    	RegisteredCustomer *customer;
    	Deliveryperson *dp;

public:

	feedback();
	feedback(const char  feed_mzg[], RegisteredCustomer *customer, Deliveryperson *dp);
	void display_feedback();
	~feedback();
};
