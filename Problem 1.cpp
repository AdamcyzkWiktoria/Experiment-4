#include <iostream>

using namespace std;

void addition();
void subtraction();
void multiplication();
void division();
void mod();

int main ()
{
	char choice, choice2, repeat;
	char y=0;
	do {
	cout << "This is a program for a simple calculator, "
	     << "choose a nuumber below for desired operation\n"
	     << "1. Addition\n"
	     << "2. Subtraction\n"
	     << "3. Multiplication\n"
	     << "4. Division\n"
	     << "5. Modulus\n"
	     << "Enter your choice: "; cin >> choice;
	
	switch (choice)
	{
		case '1':
			addition();
			break;
		case '2':
			subtraction();
			break;
		case '3':
			multiplication();
			break;
		case '4':
			division();
			break;
		case '5':
			mod();
	}
	
	cout << endl;
	cout << "Continue using the program? y/n \n";
	cin >> choice2;
   } while (choice2 == 'Y' or choice2 == 'y');
}

void addition()
{
	int sumAdd, input1, input2;
	
	cout << "Enter two numbers: "; cin >> input1 >> input2;
	
	sumAdd = input1 + input2;
	cout << "Result: " << sumAdd;
}

void subtraction()
{
	int sumSub, input1, input2;;
	
	cout << "Enter two numbers: "; cin >> input1 >> input2;
	
	sumSub = input1 - input2;
	cout << "Result: " << sumSub;
}

void multiplication()
{
	int sumMul, input1, input2;;
	
	cout << "Enter two numbers: "; cin >> input1 >> input2;
	
	sumMul = input1 * input2;
	cout << "Result: " << sumMul;
}

void division()
{
	int sumDiv, input1, input2;;
	
	cout << "Enter two numbers: "; cin >> input1 >> input2;
	
	sumDiv = input1 / input2;
	cout << "Result: " << sumDiv;
}

void mod()
{
	int sumMod, input1, input2;;
	
	cout << "Enter two numbers: "; cin >> input1 >> input2;
	
	sumMod = input1 % input2;
	cout << "Result: " << sumMod;
}
