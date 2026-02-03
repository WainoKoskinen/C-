#include <iostream>


int main(){
    
    double celcius;
    
 
    std::cout << "anna lämptila celcius";
    std::cin >> celcius;

   double fahrenheit = celcius *9/5 + 32;
    std::cout << celcius << "\n";
    std::cout << fahrenheit;

   return 0;

}