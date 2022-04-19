output:customer_base.o checkoutclerk_base.o display.o operations.o init.o main.o
	g++ main.o customer_base.o checkoutclerk_base.o display.o operations.o init.o -o billing_system
customer_base.o: .\Sources\Customer\customer_base.cpp .\Sources\Customer\customer_base.h
	g++ -c .\Sources\Customer\customer_base.cpp
checkoutclerk_base.o:.\Sources\CheckoutClerk\checkoutclerk_base.cpp .\Sources\CheckoutClerk\checkoutclerk_base.h
	g++ -c .\Sources\CheckoutClerk\checkoutclerk_base.cpp
display.o: .\Sources\Display\display.cpp .\Sources\Display\display.h
	g++ -c .\Sources\Display\display.cpp
operations.o:.\Sources\Operations\operations.cpp .\Sources\Operations\operations.h
	g++ -c .\Sources\Operations\operations.cpp
init.o:.\Sources\init.cpp .\Sources\init.h
	g++ -c .\Sources\init.cpp
main.o:.\Sources\main.cpp .\Sources\main.h
	g++ -c .\Sources\main.cpp
clean : rm *.o output