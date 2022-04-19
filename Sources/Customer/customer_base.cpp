#include<iostream>
#include "customer_base.h"
using namespace std;
customer_base::customer_base(int p_id)
{
    cout<<"Customer Id is"<<p_id<<"\n"; // Just for testing purpose. Will be removed once logging part is done.
}

customer_base::~customer_base()
{

}