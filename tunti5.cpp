#include <iostream> 
#include <vector>

class SignalBuffer {
    private: 
        std::vector<int> data;
       
    public:
        
        void lisaaArvo(int value) {
            data.push_back(value);
        }

    
        double laskeKeskiarvo() {
            
            if (data.empty()) {
                return 0.0;
            }

            double summa = 0; 
            
            
            for (int i = 0; i < data.size(); i++) {
                summa += data[i];
            }
            
            return summa / data.size();
        }

        
        void tyhjenna() {
            data.clear();
        }    
};

int main() { 
    SignalBuffer buffer;
    
    
    buffer.lisaaArvo(10);
    buffer.lisaaArvo(20);
    buffer.lisaaArvo(30);

    
    std::cout << "Keskiarvo: " << buffer.laskeKeskiarvo() << std::endl;

    buffer.tyhjenna();

    std::cout << "Keskiarvo tyhjana: " << buffer.laskeKeskiarvo() << std::endl; 
    
    return 0; 
}