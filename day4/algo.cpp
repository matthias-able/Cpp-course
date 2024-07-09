#include <struc>
#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>


//import koerpergroesen as groesen
std::vector<int> my_numbers;


void read_file(file iFile){
int i = 0;
while(true){
	std::ifstream iFile;
	if( iFile.eof()){
		break;
	} else {
		hist.at(i) = std::getline(); //todo cast?
	}
	i++;
}
}
/* todo use to fill vector!!
std::map<int, string> my_map;
// map befuellen
for (auto p : my_map) {
std::cout << p.first << " " << p.second << std::endl;
}*/

void show_my_numbers(std::vector <double> & ){
	for (auto it = hist.begin(); it != hist.end(); ++it){
		std::cout << *it <<"\n";
	}
}

double calc_mean_value(std::vector <double > vec, double sum){
	return sum / vec.length();
}

double calc_stand_deviation(std::vector <double > vec, double sum){
	return std::sqrt(
		std::inner_product(vec) - sum*sum; //? <X^2> 
	)
}

int main(){
	// a)
	read_file(alter);
	show_my_numbers();
	
	//b)
	double sum = std::accumulate (my_numbers.begin(), my_numbers.end(), 0.);
	std::cout << "sum: " << sum <<"\n";
	std::cout << "mean value: " << calc_mean_value(my_numbers, sum) <<"\n";
	
	//c)
	std::cout << "standard deviation: " << calc_stand_deviation(my_numbers, sum) <<"\n";
	
	//d)
	std::out << "smallest: " <<*std::min_element(my_numbers) << "\n";
	std::out << "largest: " <<*std::max_element(my_numbers) << "\n";
	
	//e)
	std::vector<int> sorted_numb = std::sort(my_numbers);
	show_my_numbers(sorted_numb);
	
	//f) optinal	
	
	return 0;

}


