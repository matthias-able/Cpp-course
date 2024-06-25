#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
#include <string>
#include <cstdlib>

double cr_number (){
int x = rand()%101;
return x;
}

int main (){
int x = cr_number();
while (1){
std :: string zeile ;
std :: getline (std ::cin , zeile );
int guess = std::stoi(zeile);
if (x==guess){
std::cout << "guess was correct " << std::endl;
break;
} 
if (x<guess){
std::cout << "guess too big " << std::endl;
} 
if (x>guess){
std::cout << "guess too small " << std::endl;
}
}
return 0;
}
