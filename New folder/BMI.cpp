#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

float bmi(float h, float w){
	return w / pow(h, 2);
}

int main(){
	
	float height, weight;
	
	cout << "Enter Height: ";
	cin >> height;
	cout << "Enter Weight: ";
	cin >> weight;
	
	float h, w;
	h = height / 3.281;
	w = weight / 2.205;

	float result = bmi(h,w);
	ofstream write("Out.txt");
	
	write << "Height in Meter: " << h << endl
	<< "Weight in Kilograms: " << w << endl
	<< "BMI =  " << result << endl
	<< "Status: ";
	if(result < 18.5){
		write << "Underweight";
	}else if(result >= 18.5 && result <= 24.9){
		write << "Normal";
	}else if(result >= 25 && result <= 29.9){
		write << "Overweight";
	}else if(result >= 30 && result <= 39.9){
		write << "Obese";
	}else{
		write << "Morbidly Obese";
	}
	
	write.close();	
	return 0;
}