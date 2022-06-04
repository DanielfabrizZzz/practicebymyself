#include <iostream>
using namespace std;
void  main() {
	float socio1, socio2, socio3, gananciaanual, accionessocio1, accionessocio2, accionessocio3;
	gananciaanual = 8000;
	accionessocio1 = 50;
	accionessocio2 = 30;
	accionessocio3 = 20;
	cout << "La ganancia total en el año fue de :" << gananciaanual;

	socio1 = gananciaanual*(accionessocio1 / 100) ;
	socio2 = gananciaanual*(accionessocio2 / 100) ;
	socio3 = gananciaanual*(accionessocio3 / 100) ;

	cout << "\nLas ganancias del socio 1 son de : " << socio1 << "soles" << endl;
	cout << "Las ganancias del socio 2 son de : " << socio2 << "soles" << endl;
	cout << "Las ganancias del socio 3 son de : " << socio3 << "soles" << endl;

}