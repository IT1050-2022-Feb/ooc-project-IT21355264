#include "Inventorymanager.h"
#include "RegisteredCustomer.h"
#include "UnregisteredCustomer.h"
#include "Deliveryperson.h"
#include "delivery.h"
#include "feedback.h"
#include "supplier.h"
#include "Product.h"
#include"payment.h"
#include"order.h"


int main()
{
    Inventorymanager *inv = new Inventorymanager();//object-Inventorymanager
    delivery *deliv = new delivery();//object-delivery
    payment *pay = new payment();//object-payment
    Deliveryperson *dp = new Deliveryperson();//object-delivery person
    feedback *feed = new feedback();//object-feedback
    RegisteredCustomer *customer = new RegisteredCustomer();//object-RegisteredCustomer
    order*odr =new order();//object-order
    Product*pro =new Product();//object-Product


    deliv->UpdateDeliveryDetails();
    deliv->displayDeliveryDetails();

    dp->addDelivery();
    dp->editDelivery();

    feed->display_feedback();

    odr->update_order();
  
    inv->addInvetory();

    pay-> displaypaymentDetails();

    pro->addproductdetails();
    pro->updateproductdetails();

    customer->displayDetails();
    customer-> login();

  
    delete deliv;
    delete customer;
    delete pro;
   
    return 0;

}