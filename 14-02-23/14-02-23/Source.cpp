#include<iostream>
#include<stdio.h>

using namespace std;

// Practicas de recursividad

//basic	Void Recursion 
void countdown( int number) {
	cout<< endl << number;
	if (number > 0) 
		countdown(number - 1);
	else 
		cout << endl <<  "BOOM";
}


int factorialRecursion(int number) {

	//if(number > 1) number = number * factorialRecursion(number - 1);
	
	if (number > 1) {
		int aux;
		aux = factorialRecursion(number - 1);
		number = number * aux;
	}

	return number;
}

void callRecursion() {
	//countdown(5);
	cout << endl << "!3 : " << factorialRecursion(3);

}



int main() {

	callRecursion();


	return 0;
}