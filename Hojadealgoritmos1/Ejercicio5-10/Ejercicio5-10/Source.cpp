#include <iostream>
using namespace std;
int main() {
	float preciodecompra,gananciadeseada,ganancia,preciodeventa;
	//Leyendo el precio de compra.
	cout << "/nIntroduzca el precio de compra del producto: ";
	cin >> preciodecompra;
	
	//Preguntando por el porcentaje de ganancia.
	cout << "Introduzca el porcentaje de ganancia deseado: ";
	cin >> gananciadeseada;


	//calculando el precio de venta
	ganancia = (preciodecompra / 100) * gananciadeseada;
	preciodeventa = preciodecompra + ganancia;
	cout << "El precio al que la empresa debe vender el producto para obtener la ganancia deseada es: " << preciodeventa<<endl;




}