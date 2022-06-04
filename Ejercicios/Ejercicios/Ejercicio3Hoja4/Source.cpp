#include <iostream>
using namespace std;
void main() {
	cout << "\n*****Ejercicio3 Hoja4*****" << endl;
	int codigo;
	//CODIGO LAGARTO jaaa
	//codigo : 716799 primer digito = 7
	cout << "Ingresa el código: "; cin >> codigo;
	int precio;
	cout << "Ingresa el precio: "; cin >> precio;
	int primerdigito;
	float precionuevo;
	primerdigito = codigo / 100000;
	if (primerdigito == 4 || primerdigito == 9) {
		precionuevo = precio - (0.045 * precio);
		cout << "Precio final: " << precionuevo;
	}
	else if (primerdigito == 1 || primerdigito == 5) {
		precionuevo = precio - (0.08 * precio);
		cout << "Precio final: " << precionuevo;
	}
	else if (primerdigito == 2 || primerdigito == 6) {
		precionuevo = precio - (0.035 * precio);
		cout << "Precio final: " << precionuevo;
	}
	else if (primerdigito == 8) {
		precionuevo = precio - (0.0425 * precio);
		cout << "Precio final: " << precionuevo;
	}
	else if (primerdigito == 3 || primerdigito == 7) {
		precionuevo = precio - (0.11 * precio);
		cout << "Precio final: " << precionuevo;
	}
	else
	{
		cout << "ERROR EN EL CODIGO. ";
	}
}