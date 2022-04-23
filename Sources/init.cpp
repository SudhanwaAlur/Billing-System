#include "init.h"
#include "math.h"
#include <iostream>
using namespace std;
init::init(/* args */)
{
}

init::~init()
{
}
void init::initialize_billing_system()
{
    initialize_customer();
    initialize_checkout_clerk();
    initialize_operations();
    initialize_display();
        initialize_items();
}
customer_base* init::initialize_customer()
{
    cout<<"Initializing";// Just for testing purpose. Will be removed once logging part is done.
    m_customer = new customer_base(rand());
    return m_customer;
}
checkoutclerk_base* init::initialize_checkout_clerk()
{
    m_checkout = new checkoutclerk_base();
    return m_checkout;
}
operations* init::initialize_operations()
{
    m_operations = new operations();
    return m_operations;
}
display* init::initialize_display()
{
    m_display = new display();
    return m_display;
}
Items* init::initialize_items()
{
    m_items = new Items();
   // m_items->initialize_database();
    return m_items;
}