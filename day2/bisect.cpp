#include <iostream>
#include <cmath>
#include <math.h>


double fkt_a(double x){
	return (x*x - sin(x))/x;
}

void fkt_b (double& xm, double& xp){
    int i = 0;
    while ((xp-xm)>0.000001){   
        double x = (xm + xp )/2; 
        if (fkt_a(x)<0){
        xm = x;
        } else {
        xp = x;        
        }
        i++;
        if(i>1000){
    	std::cout << "No converging behavier! aborted!" << std::endl;  
    	std::abort();
        }
    }        
    std::cout <<i <<std::endl;
    return; 
}

void fkt_d (double& ym, double& yp, double y){
    int i = 0;
    while ((yp-ym)>0.000001){   
        double x = (ym + yp )/2; 
        if (x*x<y){
        ym = x;
        } else {
        yp = x;        
        }
        i++;
        if(i>1000){
    	std::cout << "No converging behavier! aborted!" << std::endl;  
    	std::abort();
        }
    }        
    std::cout <<i <<std::endl;
    return; 
}
int main (){
	double xm = 0.5;
	double xp = 1.;
	fkt_b(xm, xp);
    std::cout << "result min" << xm << std::endl;
	std::cout << "result max" << xp << std::endl;
	
	double y = 2.5;
	double ym = 0.;
	double yp = 1. + y/4;
	fkt_d(ym, yp, y);
    std::cout << "result min" << ym << std::endl;
	std::cout << "result max" << yp << std::endl;	
    return 0;
}


