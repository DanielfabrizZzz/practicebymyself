#include <iostream>
using namespace std;
void main() {
	cout << "Ingrese cantidad de neum�ticos: " << endl;
	int neumaticos,preciounitario;
	cin >> neumaticos;
	//145<3
	//3y5 138
	//los dem�s 135
	preciounitario =((neumaticos<3)*145) +((neumaticos>=3 && neumaticos<5)*138)+((neumaticos>=5)*135) ;

	cout << "El costo unitario de cada ne�matico :" << preciounitario << endl;
	cout << "El monto a pagar es : " << preciounitario * neumaticos << endl;






}