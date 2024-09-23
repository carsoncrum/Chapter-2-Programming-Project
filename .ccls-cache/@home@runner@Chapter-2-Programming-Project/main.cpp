// Calculating Energy Drink Consumption
#include <iostream>
using namespace std;

int main()

{
const int surveyed_customers = 16500;
const double enery_percentage = 0.15;
const double citrus_percentage = 0.58;

int energy_drink_customers = surveyed_customers * enery_percentage;
int citrus_drink_customers = energy_drink_customers * citrus_percentage;

 cout << "The approximate number of energy drink customers in the survey is " << energy_drink_customers << endl;
 cout << "The approximate number of citrus flavored energy drink customers in the survey is " << citrus_drink_customers << endl;

  return 0;
}