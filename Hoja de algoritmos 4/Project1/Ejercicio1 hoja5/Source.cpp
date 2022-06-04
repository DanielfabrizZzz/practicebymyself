#include <iostream>
using namespace std;
void main() {
	int lado1, lado2, lado3;
	cout << "Ingrese los lados del triángulo:" << endl;
	cin >> lado1;
	cin >> lado2;
	cin >> lado3;

	int equilatero = (lado1 == lado2 )&&(lado1==lado3)&&(lado2==lado3);
	bool escaleno = (lado1 != lado2) && (lado1 != lado3) && (lado2 != lado3);
	int isosceles = (lado1 == lado2) || (lado1 == lado3) || (lado2 == lado3);


	cout << "Equilatero " << equilatero << endl;
	cout << "Escaleno " << escaleno << endl;
	cout << "Isosceles " << isosceles << endl;



}