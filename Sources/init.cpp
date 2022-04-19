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
}
customer_base* init::initialize_customer()
{
    cout<<"Initializing";// Just for testing purpose. Will be removed once logging part is done.
    m_customer = new customer_base(rand());
    return m_customer;
}
void init::initialize_checkout_clerk()
{

}
void init::initialize_operations()
{

}
void init::initialize_display()
{

}