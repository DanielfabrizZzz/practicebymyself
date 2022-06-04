#include<iostream>
using namespace std;
void main() {
	float cent, ingredients,price ;
	cout << "***DON RAUL'S PIZZA***"<<endl;
	cout << "Enter the number of centimeters in the diameter: "; cin >> cent;
	cout << "Enter the number of extra ingredients: "; cin >> ingredients;

	price = ((cent * 1.5) + (ingredients * 2.5));
	cout << "The price of the pizza you ordered is : " << price <<"$";

}