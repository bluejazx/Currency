#include <iostream>

int main()
{
  //Variables for each different currency
  double brazil;
  double peru;
  double colombia;
  double USD;

  //gets the amount of each currency the user has
  std::cout << "Enter the number of Colombian Pesos below: \n";
  std::cin >> colombia;
  std::cout << "Enter the number of Brazilian Reais below: \n";
  std::cin >> brazil;
  std::cout << "Enter the number of Peruvian Soles below: \n";
  std::cin >> peru;

  //Preforms conversions for each to USD
  USD = (brazil*.19) + (peru*.27) + (colombia*.00026);
  std::cout << "US Dollars = $" << USD << "\n"; 
  
}
