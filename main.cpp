// Calculating Distance per Tank of Gas
#include <iostream>
using namespace std;

int main()

{

  const int tank = 20;
 const double town = 23.5;
  const double highway = 28.9;
  

  double town_distance = town * tank;
  double highway_distance = highway * tank;

  cout << "A car with a 20-gallon gas tank averages 23.5 miles per gallon when driven in town, and 28.9 miles per gallon when driven on the highway.\n\n";
  cout << "Below shows the distances the car's tank can travel in the town and on the highway:\n\n";
  
  cout << "Distance in town: " << town_distance << " miles" << endl;
  cout << "Distance on highway: " << highway_distance << " miles" << endl;


  return 0;
}