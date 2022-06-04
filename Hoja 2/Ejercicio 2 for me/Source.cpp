#include<iostream>

using namespace std;

void Entradacomplejos(int& real1, int& real2, int& imagin1,int& imagin2) {
	cout << "Ingrese los datos del primer numero complejo: "<<endl;
	cout << "Parte real: "; cin >> real1;
	cout << "Parte imaginaria: "; cin >> imagin1;

	cout << "Ingrese los datos del segundo numero complejo: " << endl;
	cout << "Parte real: "; cin >> real2;
	cout << "Parte imaginaria: "; cin >> imagin2;
}
void suma(int& real1, int& real2, int& imagin1, int& imagin2) {
	int sumreal = real1 + real2;
	int sumimaginaria = imagin1 + imagin2;
	cout << "\tLa suma de los numeros complejos es: ";
	cout << "( " << real1 << " + " << imagin1 << "i ) + ( " << real2 << " + " << imagin2 << "i ) = ( " << sumreal << " + " << sumimaginaria << "i ) " << endl;
}
void resta(int& real1, int& real2, int& imagin1, int& imagin2) {
	int restareal = real1 - real2;
	int restaimaginaria = imagin1 - imagin2;
	cout << "\tLa resta de los numeros complejos es: ";
	cout << "( " << real1 << " + " << imagin1 << "i ) - ( " << real2 << " + " << imagin2 << "i ) = ( " << restareal << " + " << restaimaginaria << "i ) " << endl;
}

void main() {
	int* opcion = new int;
	cout << "\tMENU DE OPCIONES"<<endl;
	cout << "1.Sumar 2 Numeros Complejos."<<endl;
	cout << "2.Restar 2 Numeros Complejos."<<endl;
	cout << "3.Salir del programa."<<endl;
	cout << "-------------------------------"<<endl;
	cout << "Ingrese su opcion: "; cin >> *opcion;

	int real1, real2, imagin1, imagin2;
	switch (*opcion) {
	case 1:
		Entradacomplejos(real1, real2, imagin1, imagin2);
		suma(real1, real2, imagin1, imagin2);

		break;
	case 2:
		Entradacomplejos(real1, real2, imagin1, imagin2);
		resta(real1, real2, imagin1, imagin2);


		break;
	case 3:
		cout << "Nos vemos :)";

	}
}