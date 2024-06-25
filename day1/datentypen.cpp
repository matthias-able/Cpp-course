#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
#include <string>

double a ()
{
double u = 6.9;
double x = 6.0e23;
int a;
a=static_cast<int>(x);
a=round(u);
//a=static_cast<unsigned char>(x);
std::cout << "result " << a << std::endl;

return 0;
}

double round(double x){
double a;
a=static_cast<int>(x+0.5);
return a;
}

double tostr (double x){
std::cout << "result " << std::to_string(x) << std::endl; 
return 0;
}

int main ()
{
//a();
int x = -5;
double y = 6.0e23;
tostr(x);
tostr(y);
return 0;
}
