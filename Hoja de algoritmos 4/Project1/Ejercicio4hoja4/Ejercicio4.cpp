











#include <iostream>
using namespace std;

void main() {
	const int horas_semanales = 40;
	const int costo_hora = 16;
	const int cost_hora_adicional = 20;
	cout << "Ingrese cantidad de horas a trabajar " << endl;
	int horas;
	cin >> horas;
	int monto =
		((horas <= horas_semanales) * (costo_hora * horas))
		+ ((horas > horas_semanales) * (horas_semanales * costo_hora)
			+ ((horas - horas_semanales) * cost_hora_adicional));

	cout << "El sueldo semanal es " << monto << endl;
}