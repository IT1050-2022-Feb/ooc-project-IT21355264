#include "delivery.h"
#include"delivery_p.h"
#include"payment.h"
#include"feedback.h"
#include <iostream>


using namespace std;

int main()
{
    delivery* deliv = new delivery();//object-delivery
    payment* pay = new payment();//object-payment
    delivery_p* dp = new delivery_p();//object-delivery person
    feedback* feed = new feedback();//object-feedback


    deliv->UpdateDeliveryDetails();
    deliv->displayDeliveryDetails();

    feed->display_feedback();



    delete deliv;


    return 0;

}
