#include <iostream>

class SensorHub {
public:
    void processSensors() {
        // Meillä on tasan 5 anturia. Indeksit ovat 0, 1, 2, 3, 4.
        int sensors[5] = {10, 20, 30, 40, 50}; 
        
        int totalValue = 0; 

        for (int i = 0; i < 5; i++) {
            
            std::cout << "Luetaan sensori " << i << ": " << sensors[i] << std::endl;
            
            totalValue = totalValue + sensors[i];
            
            
        }

        std::cout << "Total: " << totalValue << std::endl;
    }
};

int main() {
    SensorHub hub;
    hub.processSensors();
    return 0;
}