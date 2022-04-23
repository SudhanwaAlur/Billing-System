#ifndef INIT_H_
#define INIT_H_
#include "stdlib.h"
#include "./Customer/customer_base.h"
#include "./CheckoutClerk/checkoutclerk_base.h"
#include "./Display/display.h"
#include "./Operations/operations.h"
#include "./Database/Items.h"
class init
{
private:
    /* data */
    customer_base *m_customer=NULL;
    checkoutclerk_base *m_checkout=NULL;
    display *m_display=NULL;
    operations *m_operations=NULL;
    Items *m_items=NULL;

public:
    init(/* args */);
    void initialize_billing_system();
    customer_base* initialize_customer();
    checkoutclerk_base* initialize_checkout_clerk();
    display* initialize_display();
    operations* initialize_operations();
    Items* initialize_items();
    ~init();
};
#endif