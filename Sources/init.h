#ifndef INIT_H_
#define INIT_H_
#include "stdlib.h"
#include "./Customer/customer_base.h"
class init
{
private:
    /* data */
    customer_base *m_customer=NULL;
public:
    init(/* args */);
    void initialize_billing_system();
    customer_base* initialize_customer();
    void initialize_checkout_clerk();
    void initialize_display();
    void initialize_operations();
    ~init();
};
#endif