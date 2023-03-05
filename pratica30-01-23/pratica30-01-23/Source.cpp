#include<iostream>
#include<stdio.h>
#include<ctime>// libreria para medir los tiempos de ejecucion 

using namespace std;

void otherStructureDates()
{

	typedef	struct PERSON // es buena practica agregar al el typedef al inici del struct (typedef es usado para endatisar que es un tipo de dato)
	{
		int age;
		float hight;
	};


	union PERSON_U {
		int age;
		float hight;
	};

	enum days { sunday, monday, tueday, wednesday, thursday, friday, saturday }; // el enum es de tipo constante para tipo de datos 
	enum days today = monday;

	cout << endl << monday;

	PERSON_U mum;
	mum.age = 45;
	mum.hight = 1.70;

	cout << endl << "age of dad :" << mum.age << "\nhight of dad" << mum.hight << endl;
	cout << endl << "size of mum(union) : " << sizeof(mum);

	PERSON dad;
	dad.age = 75;
	dad.hight = 1.89;

	cout << endl << "age of dad :" << dad.age << "\nhight of dad" << dad.hight << endl;
	cout << endl << "size of dad(struct) : " << sizeof(dad);
}

void staticArray() 
{
	int train[6];

	train[0] = 10;
	train[1] = 50;
	train[2] = 20;
	train[3] = 90;
	train[4] = 80;
	train[5] = 40;

	for (int i = 0; i < 6; i++) {
		cout << "in the position " << i << " the value is " << train[i] << endl;
	}

	int target = 40;

	for (int i = 0; i < 6; i++)
	{
		if (target == train[i]) cout << "in position is correct " << i << endl;
	}
}


void dinamicArary()
{
	int size;

	cout << "tell  me the number of elements in  the array \n";
	cin >> size;

	int *array = new int[size];

	for (int i = 0; i < size; i++)
	{
		cout << "tell  me the value of the elements  \n"<< i <<endl;
		cin >> array[i];
	}

	for (int i = 0; i < size; i++)
	{
		cout <<"in the position "<<i <<"this is  " << array[i] << endl;
	
	}



}


void checkPal( char *string) 
{
	bool pal = true;

	for (int i = 0; i < strlen(string) / 2 &&  pal; i++) 
	{
		if (string[i] != string[ strlen(string) - i - 1] ) 
			pal = false;
	}
	if (pal) cout << string << " is pal" << endl;
	else  cout << string << " is not pal" << endl;
}


void checkNume()
{ 
	float cadena[] = { 1.5,2.9,5.5,9.2,8.6 };
	int  check = 0;
	check = sizeof(cadena)/sizeof(*cadena);
	


	float  promedio = 0, mayor = cadena[0], menor = cadena[0];
	

	for (int  i = 0; i < check; i++)
	{
		promedio += cadena[i];

		
		if (mayor < cadena[i]) {
		
			mayor = cadena[i];
		}

		if (menor > cadena[i]) {

			menor = cadena[i];
		}	
		
	}

	cout << " this is the highest number " << mayor << endl;
	cout << " this is the lowest number " << menor << endl;
	cout << "this is the average " << promedio / check << endl;
}

void arry1() {
	char name[] = "Angel yahir";
	cout << name << endl;
	cout << strlen(name) << endl; // el strlen es para saber la longitud de una cadena  el \0 espara un fin de linea
	_strlwr_s(name); // esta funcion cumple con fin de cambiar una cadena de texto a minusculas
	cout << name << endl;
	_strrev(name); // es la funcion cambia la cadena de texto alreves 
	cout << name << endl;

}


void byBubbleSort() {

	unsigned t0, t1;
	t0 = clock();

	//int v[] = { 2,7,1,4,3,5,0,8,2,-1,2 };
	//int v[] = { 2,7,1,4,3,5,0,8,2,-1,2 ,58,10,15,45,-5,78,9,8,878,45,54,68,63,62,78,98,95,99,45,32,31,38,76,79,87845,7845,689,894,565,5678,78748,4544,4478,8998,852,999,9556,966,565663354,7812 };
	int v[] = { 7, 28, 2, 53, 16, 13, 45, 345, 2345, 234, 35235 ,123, 4346,75, 4,7,3,68,2,6,63,2,0,68,436,12,343,54,25, 13, 15, 2, 97, 81, 981 ,618 ,61, 3280, 18, 5, 78, 23, 81, 65, 84, 72, 95 };
	int size = sizeof(v) / sizeof(*v);// es para saber el numero de elementos en un array 


	// sizeof(*v) te retorna el valor de cada tipo de dato y el sizeof(v) el tamaño del arry en bit , y para saber el numero de datos del arry solo  se hace una division 

	int aux , rounds = 0;

	bool  ord = false;

	cout << endl;
	for (int i = 0; i < size; i++) cout << v[i] << " ";

	while (!ord)
	{
		ord = true; 

		for (int i = 0; i < size -1 - rounds; i++)
		{
			if (v[i] > v[i + 1]) {

				aux = v[i + 1];
				v[i + 1] = v[i];
				v[i] = aux;

				ord = false;
			}

		}
		rounds++;
	}
	cout << endl;
	for (int i = 0; i < size; i++) cout << v[i] << " ";

	t1 = clock();
	double time = double(t1 - t0) / CLOCKS_PER_SEC;// para calcular el tiempo

	cout << "\nExcution time byBubbleShort: " << time << endl;
}

void bySelectionSort() {
	
	unsigned t0, t1;
	t0 = clock();
	//int v[] = { 2,7,1,4,3,5,0,8,2,-1,2 };
	//int v[] = { 2,7,1,4,3,5,0,8,2,-1,2 ,58,10,15,45,-5,78,9,8,878,45,54,68,63,62,78,98,95,99,45,32,31,38,76,79,87845,7845,689,894,565,5678,78748,4544,4478,8998,852,999,9556,966,565663354,7812 };
	int v[] = { 7, 28, 2, 53, 16, 13, 45, 345, 2345, 234, 35235 ,123, 4346,75, 4,7,3,68,2,6,63,2,0,68,436,12,343,54,25, 13, 15, 2, 97, 81, 981 ,618 ,61, 3280, 18, 5, 78, 23, 81, 65, 84, 72, 95 };
	int size = sizeof(v) / sizeof(*v);

	int aux, posMin ;


	cout << endl;
	for (int i = 0; i < size; i++) cout << v[i] << " ";

	for (int i = 0; i < size; i++)
	{
		posMin = i;

		for (int j = i+1; j < size ; j++)
		{
			if (v[posMin] > v[j]) posMin = j;
		}

			aux = v[i];
			v[i] = v[posMin];
			v[posMin] = aux;
	}

	cout << endl;
	for (int i = 0; i < size; i++) cout << v[i] << " ";


	t1 = clock();
	double time = double(t1 - t0) / CLOCKS_PER_SEC;
	cout << "\nExcution time bySelectionSort: " << time << endl;
}

void byInsertion() {


	unsigned t0, t1;
	t0 = clock();
	//int v[] = { 2,7,1,4,3,5,0,8,2,-1,2 };
	//int v[] = { 2,7,1,4,3,5,0,8,2,-1,2 ,58,10,15,45,-5,78,9,8,878,45,54,68,63,62,78,98,95,99,45,32,31,38,76,79,87845,7845,689,894,565,5678,78748,4544,4478,8998,852,999,9556,966,565663354,7812 };
	int v[] = { 7, 28, 2, 53, 16, 13, 45, 345, 2345, 234, 35235 ,123, 4346,75, 4,7,3,68,2,6,63,2,0,68,436,12,343,54,25, 13, 15, 2, 97, 81, 981 ,618 ,61, 3280, 18, 5, 78, 23, 81, 65, 84, 72, 95 };
	//int v[] = { 2,7,1,4,3,5,0,8,2,-1,2 };
	int size = sizeof(v) / sizeof(*v);
	int aux;

	cout << endl;
	for (int n = 0; n < size; n++) cout << v[n] << " ";// estado inicial del arry 

	for (int i = 1; i < size; i++)
	{
		aux = v[i];
		int j = 0;

		for (j = i - 1; j >= 0 && v[j] > aux ; j--)
		{
			v[j + 1] = v[j];
		}
		v[j + 1] = aux;
		
	}

	cout << endl;
	for (int k = 0; k < size; k++) cout << v[k] << " ";	//estado final del arry con el algoritmo implementado 

	t1 = clock();
	double time = double(t1 - t0) / CLOCKS_PER_SEC;
	cout << "\nExcution time byInsertion: " << time << endl;

}


void byJJ() {

	unsigned t0, t1;
	t0 = clock();
	//int v[] = { 2,7,1,4,3,5,0,8,2,-1,2 };
	int v[] = { 7, 28, 2, 53, 16, 13, 45, 345, 2345, 234, 35235 ,123, 4346,75, 4,7,3,68,2,6,63,2,0,68,436,12,343,54,25, 13, 15, 2, 97, 81, 981 ,618 ,61, 3280, 18, 5, 78, 23, 81, 65, 84, 72, 95 };

	int  size = sizeof(v) / sizeof(*v);
	int aux, posMin , posMax , PosFinal;
	PosFinal = size -1;


	cout << endl;
	for (int h = 0; h < size; h++) cout << v[h] << " ";


	for (int i = 0; i < size /2	; i++)
	{	
		posMin = i;
		posMax = i;

		for (int j = i; j <= PosFinal; j++) {
			if (v[j] > v[posMax]) posMax = j;
			if (v[j] < v[posMin]) posMin = j;
		}

		aux = v[posMin];
		v[posMin] = v[i];
		v[i] = aux;

		if (posMax == i) posMax = posMin;

		aux = v[PosFinal];
		v[PosFinal] = v[posMax];
		v[posMax] = aux; 

		PosFinal--;
	}

	
	cout << endl;
	for (int n = 0; n < size; n++) cout << v[n] << " ";
	t1 = clock();
	double time = double(t1 - t0) / CLOCKS_PER_SEC;
	cout << "\nExcution time byJJ: " << time << endl;


}


void byRe() {
	//unsigned t0, t1;
	//t0 = clock();
	////int v[] = { 2,7,1,4,3,5,0,8,2,-1,2 };
	//int v[] = { 7, 28, 2, 53, 16, 13, 45, 345, 2345, 234, 35235 ,123, 4346,75, 4,7,3,68,2,6,63,2,0,68,436,12,343,54,25, 13, 15, 2, 97, 81, 981 ,618 ,61, 3280, 18, 5, 78, 23, 81, 65, 84, 72, 95 };

	//int  size = sizeof(v) / sizeof(*v);

	//cout << endl;
	//for (int h = 0; h < size; h++) cout << v[h] << " ";


	



	//cout << endl;
	//for (int n = 0; n < size; n++) cout << v[n] << " ";
	//t1 = clock();
	//double time = double(t1 - t0) / CLOCKS_PER_SEC;
	//cout << "\nExcution time byJJ: " << time << endl;
}


int main () {

	//otherStructureDates();
	//dinamicArary();
	//char string[] = "allivessevilla";
	//checkPal(string);
	//checkNume();
	
	//byBubbleSort();
	//bySelectionSort();
	//byInsertion();
	//byJJ();
	byRe();


	return 0;
}