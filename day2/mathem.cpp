#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
#include <string>
#include <cstdlib>

double fkt_a (float i){
	int x = i*i - 4*i +2;
	std::cout << "result " << x << std::endl;
	return x;
}

int f (int n){
	if(n<2){
		return n;	
	} else {
	return f(n-1) + f(n-2);	
	}
}
/*
int main () {
std :: vector <int > fibo = { 0, 1 };
// Hier Berechnung einfügen ...
// Tipp: push_back , at , size verwenden !
// den Vektor fibo ausgeben
for ( unsigned i = 0; i != fibo.size (); ++i) {
std :: cout << fibo.at (i) << ", ";
}
std :: cout << std :: endl;
}*/

int main (){
	
	//fkt_a(8.);
	//std::cout << "fib " << f(5) << std::endl;
	
	return 0;
}
