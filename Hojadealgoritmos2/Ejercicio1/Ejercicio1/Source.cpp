#include <iostream>

#include <math.h>

using namespace std;

void main() {

	int cantidad;

	cout << "ingrese cantidad: " << endl;

	cin >> cantidad;



	int monedas_de_5 = cantidad / 5;
	bool resultado = monedas_de_5 < 7;
	if (monedas_de_5 >= 7) {
		cout << "Muchas monedas de 5." << endl;
	}

	cout << "monedas de 5: " << monedas_de_5 << endl;

	int restante_de_5 = cantidad % 5;

	int monedas_de_2 = restante_de_5 / 2;

	cout << "monedas de 2: " << monedas_de_2 << endl;

	int restante_de_2 = restante_de_5 % 2;

	int monedas_de_1 = restante_de_2 / 1;

	cout << "monedas de 1: " << monedas_de_1 << endl;











}