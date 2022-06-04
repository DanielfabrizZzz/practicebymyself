#include <iostream>
using namespace std;

void main() {
	cout << "\n*****Ejercicio13 Hoja1*****" << endl;
	int num,first,second,third;
	cout << "Ingrese número de 3 cifras: ";cin >> num;
	if (num >= 100 && num < 1000) {
		first =num/100 ;
		num = num %100;
		second =num/10 ;
		num = num % 10;
		third =num ;
		cout<<"El numero al reves seria : " << third << second << first << endl;
	}
	else
	{
		cout << "Numero incorrecto.";
	}

}