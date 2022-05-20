#include "feedback.h"
#include <cstring>

feedback::feedback() 
{
  strcpy(feedback_mzg,"");
}
feedback::feedback(const char feed_mzg[], RegisteredCustomer *customer,Deliveryperson *dp)
{
  strcpy(feedback_mzg, "feed_mzg");
}
void feedback::display_feedback() 
{
  
}
feedback::~feedback()
{
  
}
