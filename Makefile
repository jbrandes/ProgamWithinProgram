

all:
	g++ -g -Wall -o main BankAccount.cpp Choose.cpp programs.cpp

run:
	g++ -g -Wall -o main BankAccount.cpp Choose.cpp programs.cpp

clean:

	rm BankAccount.cpp Choose.cpp programs.cpp
