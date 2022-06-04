#include<iostream>
using namespace std;
void main() {
	int tipo1, tipo2, tipo3,propina,total;
	cout << "Ingrese la cantidad de caramelos que va a comprar por el Tipo 1: "; cin >> tipo1;
	cout << "Ingrese la cantidad de caramelos que va a comprar por el Tipo 2: "; cin >> tipo2;
	cout << "Ingrese la cantidad de caramelos que va a comprar por el Tipo 3: "; cin >> tipo3;
	cout << "Ingrese el Monto de la Propina : "; cin >> propina;
	total = (0.75*tipo1) + (1.15*tipo2) + (0.65*tipo3);
	if (propina == total) {
		cout << "La propina es suficiente para comprar, Disfrútalo.";
	}
	else
	{
		cout << "LA PROPINA NO FUE SUFICIENTE PARA PAGAR POR LOS CARAMELOS";
	}
}