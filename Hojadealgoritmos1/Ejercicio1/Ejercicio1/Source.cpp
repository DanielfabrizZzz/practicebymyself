#include <iostream>
using namespace std;
//Definiendo las variables del ejercicio 1 de la hoja de algoritmos
void main() {
	float A, B, C, areadeltriangulo, areadelcuadrilatero;
	A = 9;
	B = 6;
	C = 3;
	areadeltriangulo = ((A - C) * B) / 2;
	areadelcuadrilatero = B * C;
	cout << "El area total de la figuta es: "<< areadelcuadrilatero + areadeltriangulo;
}