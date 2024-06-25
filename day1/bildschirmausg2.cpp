#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES

int abcd ()
{
int x = 7.2;
int y = 3;
std::cout << "x is" << x+x << std::endl;
std::cout << "x is" << std::sin(0)  << std::endl;
std::cout << "x is" << std::sin(90)  << std::endl;
std::cout << (std::sin(90))*180/M_PI  << std::endl;
}

double polar (double x, double y)
{
return 1;
}

int main ()
{
double x=0.5;
double y =-0.5;
std::cout << std::atan2( y, x) << std::endl;
std::cout << polar(y, x) << std::endl;
return 1;
}
