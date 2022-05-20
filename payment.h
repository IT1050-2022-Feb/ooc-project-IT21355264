#include"order.h"
#include<cstring>
#define SIZE 3

class payment
{
private:
   int payID;
   char payType[50];
   double payamount;
//class relationship
   order*odr[SIZE];

public:
    payment();
    payment(int PID, const char p_Type[],double pay_amount,order *coder);
    void checkpayment();
    void confirmpayment();
    void displaypaymentDetails();
    ~payment();
}