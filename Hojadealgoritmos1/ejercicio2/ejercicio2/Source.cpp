#include <iostream>
using namespace std;
void main() {
	float A, B, L,preciometrocubico,volumen,pago;
	A = 5;
	B = 6;
	L = 7;
	volumen = A * B * L;
	preciometrocubico = 5;
	pago = volumen * preciometrocubico;
	cout << "El pago a realizar de forma mensual es de : " << pago << "soles";

}