#include <iostream>
using namespace std;
void main() {
	cout << "\n*****Pimentel Brothers*****"<<endl;
	int tires,eachtire;
	/*
	*when it is less than 3 tires, you pay 145 for each one
	* If you buy between 3 and 5 tires, you pay, for each one, S/. 138.
	* if yoy buy more than 5tires , you will pay 135 for each one
	*/
	cout << "How many tires do you wanna buy?: "; cin >> tires;
	eachtire = ((tires < 3) * 145) + ((tires >= 3 && tires <= 5) * 138) + ((tires > 5) * 135);
	cout << "The unit price of each tire is: " << eachtire<<" $" << endl;
	cout << "The total price is: " << tires * eachtire << endl;

}