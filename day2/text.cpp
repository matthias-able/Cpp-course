#include <string>
#include <iostream>
#include <vector>
#include <stdio.h>
#include <string.h>

std::vector <int> tage_im_monat = {
    31,
    28,
    31,
    30,
    31,
    30,
    31,
    31,
    30,
    31,
    30,
    31,
};

std::vector <std::string> monatsnamen = {
    "Januar",
    "Februar",
    "Maerz",
    "April",
    "Mai",
    "Juni",
    "Juli",
    "August",
    "September",
    "Oktober",
    "November",
    "Dezember",
    "Januar",
};

void kalender(){

	for(int i=0; i<12; i++){
	
	std::string tag = tage_im_monat[i]
	std::string monat = monatsnamen[i]
	std :: cout <<  tag << ". " << monat << std :: endl;	
	
	int ztag = std::stoi(tag);
    ztag++;
    tag = std::to_string(ztag);
      	
	
	}
 		
		
	
	return 0;
}
int main ()
{
	kalender();
    std::string zeile;
    while (std::getline (std::cin, zeile))
    {
        /*std::cout << zeile.length() << std::endl;
        std::cout << zeile.substr(3, 5) << std::endl;
        std::cout << zeile.substr(5) << std::endl;
        std::cout << zeile << std::endl;*/
    int i =  zeile.find(". ") ;  
    if ( i == std::string::npos){
    	std :: cout << "Error wrong format"  << std :: endl;
    } else {
    	std ::string tag = zeile.substr(0,i);
    	std ::string monat = zeile.substr(i);

    	int ztag = std::stoi(tag);
    	ztag++;
    	tag = std::to_string(ztag);
    	
    	std :: cout << "{" << tag << "}{" << monat << "}" << std :: endl;    	
    }    
    }
}













