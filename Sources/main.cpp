#include "main.h" 
#include "init.h"
int main(int argc, char *argv[])
{
    init* po_initialize_system = new init();
    po_initialize_system->initialize_billing_system();
    return 0;
}