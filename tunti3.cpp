#include <iostream>
int main(){

    int celcius[4];
    int yhteismaara = 0;
    int keskiarvo = 0;

    
    std::cout << "anna numerot"; 

    for(int i = 0; i < 4; i++){
    
        std::cin >> celcius[i];
        yhteismaara += celcius[i];
        
    }
        std::cout << yhteismaara;

        keskiarvo = yhteismaara / 4;
        std::cout << "\n" << keskiarvo;
        

    return 0;
}