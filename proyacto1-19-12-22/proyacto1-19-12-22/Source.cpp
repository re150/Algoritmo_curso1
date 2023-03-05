#include<iostream>
#include<stdio.h>

using namespace std;

 
void subAlg(int a, int b) {
	int value = 0;
	for (b; a > b; b++)
	{
		value++;

	}

	cout << "la diferencia es de :" << value << endl;
}

void mulAlg(int a , int b) {
	int value = 0;
	
	while (b)
	{
		b--;

		value += a;
	}
	cout << "resultado de la multiplicacion es :"<< value<<endl;
}

void divAlg(int a, int b) {
	int value = 0;
	while ( a >= b)
	{
		value++;
		a -= b;
	}
	cout << "resultado de la diviccion es :" << value << "(" << a << ")" <<  endl;
}


void powAlg(int a , int b) {
	int value = 1;


	while (b)
	{
		--b;

		value *= a;

	}
		

	cout << "El resultado  del numero en  es:" << value << endl;
}

void factAlg(int a) {
	int value = 1;

	for (int i = 1; i <= a; i++)
	{
		value *=i;
	}
	cout << "La factorial de  es de :"<< value <<endl;
}

void verifyprime(int number) {

	bool prime = true;
	for (int i = 2; i <number/2 && prime; i++)
	{
		if (number % i == 0) prime = false;
	}
	if (prime)  cout << "is prime" << endl;
	else cout << " is not prime" << endl;
}

void verifyPerfect(int number) {
	int value = 0;

	for (int i = 1; i < number; i++) 
	{
		if (number % i == 0) value += i;
	}

	if (value == number) cout << "is perfect" << endl;
	else cout <<number<< " is nor perfect" << endl;
}

void verifyFriends(int a, int b) {
	int sumaA = 0;

	for (int i = 1; i <= a/2; i++) {
		if (a % i == 0) sumaA += i;
	}
	
	int sumaB = 0;
	for (int i = 1; i <= b/2; i++) {
		if (b % i == 0) sumaB +=i;
	}

	if ((a == sumaB) && (b == sumaA)) cout << a << "and" << b << "are friends" << endl;
	else cout << a << " and " << b << " are not friends" << endl;

}

int main() {

	subAlg(5, 1);
	mulAlg(5, 3);
	divAlg(15, 3);
	powAlg(2,3);
	factAlg(2);
	verifyprime(50);
	verifyPerfect(6);
	verifyFriends(1184, 1210);
}
