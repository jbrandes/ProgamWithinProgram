

all:
	g++ main.cpp BankAccount.cpp Choose.cpp - o choose

run:
	g++ main.cpp BankAccount.cpp Choose.cpp

	
clean:
        rm -rf *.o choose
