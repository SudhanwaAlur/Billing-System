output:customer_base.o init.o main.o
	g++ main.o customer_base.o init.o -o billing_system
customer_base.o: .\Sources\Customer\customer_base.cpp .\Sources\Customer\customer_base.h
	g++ -c .\Sources\Customer\customer_base.cpp
init.o:.\Sources\init.cpp .\Sources\init.h
	g++ -c .\Sources\init.cpp
main.o:.\Sources\main.cpp .\Sources\main.h
	g++ -c .\Sources\main.cpp
clean : rm *.o output