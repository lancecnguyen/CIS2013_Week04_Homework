#include <iostream>

double hat(double, double);
double jacket(double, double, int);
double waist (double, int);


int main(){
	using namespace std;
	double h, w;
	int age;
	char again = 'Y';
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	
	do {
		
	cout << "Please enter your height in inches: ";
	cin >> h;
	cout << "Please enter your weight in pounds: ";
	cin >> w;
	cout << "Please enter your age: ";
	cin >> age;
	
	cout << endl;
	
	cout << "The user's hat size is: " << hat (h, w) << endl;
	cout << "The user's jacket size is : " << jacket (h, w, age) << endl;
	cout << "The user's waist is: " << waist (w, age) << endl;
	cout << "Do you want to try again? Y/n" << endl;
	} while (again == 'y' || again == 'Y');
	
	return 0;
}
double hat (double h, double w){
	return w/h*2.9;
}
double jacket (double h, double w, int age){
	double older;
	older = ((age - 30) / 10) * 1/8;
	return h * w / 288 + older;
}
double waist (double w, double age){
	double older;
	older = ((age - 28) / 2) * 1 / 10;
	return w / 5.7 + older;
}