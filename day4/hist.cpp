#include <struc>
#include <cmath>
#include <iostream>
#include <vector>


//import alter as alter
std::vector<int> hist;
file iFile = ./alter //todo check this

void show_my_numbers(std::vector <double> & ){
        for (auto it = hist.begin(); it != hist.end(); ++it){
                std::cout << *it <<"\n";
        }
}

void read_file(file iFile){
while(true){
	std::ifstream iFile;
	if( iFile.eof()){
		//todo: cut hist before 1900
		break;
	} else {
		hist.at(std::getline) += 1; //todo cast?
	}
}
}

void write_file(){
	int i =0;
	for (auto it = hist.begin(); it != hist.end(); ++it){
    	if (*it > 99){
    		//write "20" + i.string[-1]  
    		//write *it
    		  		
    	} else {
    		//write "19" + i
    		//wirte *it
    	}
    	
    	
    }

    //safe alter_hist.dat
}

void calc_CDF(){
	std::sort

	//write to cdf

}


int main(){
	// a)
	read_file(alter);
	
	//b)
	write_file();
	//plot with Gnuplot
	
	//c)
	//Papier und Stift
	calc_CDF();
	
	//d) optional

	
	
	return 0;

}


