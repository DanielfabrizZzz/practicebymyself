/*1. Una empresa de software tiene planificado comprar programas para el desarrollo de
aplicaciones móviles. El costo es variable según el fabricante elegido. También deberá
elegir el tipo de programa y si es Lenguaje de Programación debe elegir el dispositivo
(Celulares, Tablas y Otros)
Se le pide elaborar un programa en C++ que permita determinar el costo total por la compra
del programa elegido si se tienen como datos el fabricante (M: Microsoft; A: Apple; L:
Linux), el tipo de programa (S: Sistema operativo; L: Lenguaje de programación) y el
dispositivo (C: Celular; T: Tabla; O: Otros).

*/
#include<iostream>
using namespace std;
void main() {
	cout << "\n*****Ejercicio13 Hoja3*****"<<endl;
	cout << "Antes de iniciar recuerda colocar de manera correcta los carácteres en mayuscula." << endl;
	char fabricante;
	char programa;
	char dispositivo;
	cout << "Ingrese el tipo de fabricante (M: Microsoft; A: Apple; L:Linux): "; cin>>fabricante;
	switch (fabricante) {
	case 'M':
		cout<< "Ingrese el tipo de programa (S: Sistema operativo; L: Lenguaje de programación): "; cin >> programa;
		switch (programa) {
		case 'S':
			cout << "El monto a pagar es de s/.1500";
			break;
		case 'L':
			cout << "Ingrese el tipo de dispositivo ((C: Celular; T: Tabla; O: Otros): "; cin >> dispositivo;
			switch (dispositivo) {
			case 'C':
				cout << "El monto a pagar es de s/.1800";
				break;
			case 'T':
				cout << "El monto a pagar es de s/.1200";
				break;
			case 'O':
				cout << "El monto a pagar es de s/.900";
				break;
			default:
				cout << "Opcion no válida.";
			}

		default:
			cout << "Opcion no válida.";

		}
	case 'A':
		cout << "Ingrese el tipo de programa (S: Sistema operativo; L: Lenguaje de programación): "; cin >> programa;
		switch (programa) {
		case 'S':
			cout << "El monto a pagar es de s/.2500";
			break;
		case 'L':
			cout << "Ingrese el tipo de dispositivo ((C: Celular; T: Tabla; O: Otros): "; cin >> dispositivo;
			switch (dispositivo) {
			case 'C':
				cout << "El monto a pagar es de s/.1900";
				break;
			case 'T':
				cout << "El monto a pagar es de s/.1800";
				break;
			case 'O':
				cout << "El monto a pagar es de s/.";
				break;
			default:
				cout << "Opcion no válida.";
			}

		default:
			cout << "Opcion no válida.";

		}
	case 'L':
		cout << "Ingrese el tipo de programa (S: Sistema operativo; L: Lenguaje de programación): "; cin >> programa;
		switch (programa) {
		case 'S':
			cout << "El monto a pagar es de s/.1000";
			break;
		case 'L':
			cout << "Ingrese el tipo de dispositivo ((C: Celular; T: Tabla; O: Otros): "; cin >> dispositivo;
			switch (dispositivo) {
			case 'C':
				cout << "El monto a pagar es de s/.100";
				break;
			case 'T':
				cout << "El monto a pagar es de s/.150";
				break;
			case 'O':
				cout << "El monto a pagar es de s/.50";
				break;
			default:
				cout << "Opcion no válida.";
			}

		default:
			cout << "Opcion no válida.";

		}
	default:
		cout << "Opcion no válida.";

	}

	}


