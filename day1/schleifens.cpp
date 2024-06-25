#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES

double zins ()
{
int i = 0;
double k = 4.0;

for (int i=0; i<25; i++)
{
double p = 0.02;
k= k *(1.0 +p);
std::cout << "kapital " << k << std::endl;
}
return 0;
}


int main ()
{
//zins();
double s = 1.0;
double p;
for (int i=1; i<1000000; i++)
{
p=s;
s+=1.0/(i*i);

if ((s-p)<0.0){
std::cout << "result " << s << std::endl;
std::cout << "iterations " << i << std::endl;
return 0;
}

}
}
