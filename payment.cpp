#include<iostream>
#include"payment.h"
#include<cstring>

payment::payment()
{
  payID =0;
  strcpy(payType,"");
  payamount = 0;
}
payment::payment(int PID, const char p_Type[],double pay_amount,order *coder)
{
  payID =PID;
  strcpy(payType,p_Type);
  payamount = pay_amount;
  
}
void payment::checkpayment()
{
  
}
void payment::confirmpayment()
{
  
}
void payment::displaypaymentDetails()
{
  
}
payment :: ~payment()
{
  
}
