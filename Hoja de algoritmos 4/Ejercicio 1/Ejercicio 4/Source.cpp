#include <iostream>
using namespace std;
void main() {
	cout << "****Workers salary calculator****" << endl;
	int workedhours, salaryph,salaryweek,extrahours;
	cout << "Enter the number of worked hours in the week: "; cin >> workedhours;
	extrahours = workedhours-40;
	salaryph = ((workedhours <= 40) * 16) + ((extrahours <=40) * 20);
	salaryweek = workedhours*salaryph;
	cout << "Your salary per hour is : "<<salaryph<<endl;
	cout << "Your salary per extra hour is : " << extrahours << endl;
	cout << "Your total salary is: "<<salaryweek<<endl;

}