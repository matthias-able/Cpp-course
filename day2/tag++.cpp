#include <string>
#include <iostream>
#include <vector>

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



int main ()
{
    std::string zeile;
    while (std::getline (std::cin, zeile))
    {
        // Zeile hier verarbeiten
        std::cout << zeile << std::endl;
    }
}
