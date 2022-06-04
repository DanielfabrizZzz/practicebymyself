#include <iostream>
using namespace std;
void main() {
	//Definiendo las variables del problema 
	int Carmela, Javier, Eulogio, capital, porcentaje_Carmela, porcentaje_Javier, porcentaje_Eulogio;
	Carmela = 655;
	Javier = 450;
	Eulogio = 345;
	capital = Carmela + Javier + Eulogio;
	cout << "El valor total del capital es: " << capital;
	//Hallando los porcentajes
	porcentaje_Carmela = (Carmela * 100) / capital;
	porcentaje_Javier = (Javier * 100) / capital;
	porcentaje_Eulogio = (Eulogio * 100) / capital;
	cout << "\nEl porcentaje de lo dado por Carmela es :" << porcentaje_Carmela << "%" << endl;
	cout << "El porcentaje de lo dado por Javier es :" << porcentaje_Javier << "%" << endl;
	cout << "El porcentaje de lo dado por Eulogio es :" << porcentaje_Eulogio << "%" << endl;
}