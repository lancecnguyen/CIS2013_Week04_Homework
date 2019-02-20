#include <iostream>

double hat(double, double);
double jacket(double, double, int);
double waist (double, double, int);


int main(){
	using namespace std;
	double h, w;
	int age;
	char again = 'Y';
	
	cout << "Please enter your height in inches: ";
	cin >> h;
	cout << "Please enter your weight in pounds: ";
	cin >> w;
	cout << "Please enter your age: ";
	cin >> age;
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout << endl;
	
	cout << "The user's hat size is: " << hat << endl;
	cout << "The user's jacket size is : " << jacket << endl;
	cout << "The user's waist is: " << waist << endl;
	
	return 0;
}
double hat (double h, double w){
	return ((w/h)*2.9);
}
double jacket (double h, double w, int age){
	return 0;
}