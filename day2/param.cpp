#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
#include <string>
#include <cstdlib>
#include <vector>


void logistic_map(double& x, double r){
	x= r*x*(1-x);	
	//std::cout << "x= " << x << std::endl;
	//std::cout << "r= " << r << std::endl;
	// 2.5 konvergiert, 3.2 gibt alternierende werte, 3.9 eher zufällige
}

void swap(double& a, double& b){
	double i = a;
	a = b;
	b = i;
}

int main (){
	/*
	double x = 0.24; 
	double r = 3.2;
	for(int i=0; i<100; i++){
	logistic_map(x, r);
	std::cout << "x= " << x << std::endl;
	//std::cout << "r= " << r << std::endl;
	*/
	
	std::vector<double> vector={1., 2., 3.};
	swap(vector.at(0), vector.at(2));
	for (int i=0; i<3; i++){
	std::cout << "result " << vector.at(i) << std::endl;	
	}

	return 0;
}
