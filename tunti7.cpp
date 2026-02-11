#include <iostream>




int main(){

    int lukujono[3];
    int lukujono2[4];

    for (int i = 0; i < 3; i++) {
        std::cout << "Anna luku: ";
        
    }

    for (int i = 0; i < 4; i++) {
        std::cout << "Anna luku: ";
        
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            if(lukujono[i] == lukujono2[j]) {
                std::cout << "Luku " << lukujono[i] << " löytyy molemmista taulukoista." << std::endl;
            }
        }

    }

    return 0;
 

}