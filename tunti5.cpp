<<<<<<< HEAD
#include <iostream>
#include <string>
#include <vector>

  class Henkilo{

    private:
        std::string nimi_;
        int ika_;

    public:
        Henkilo(const std::string& nimi, int ika) : nimi_(nimi), ika_(ika) {}
        
        std::string getNimi() const { return nimi_; }
        int getIka() const { return ika_; }
    
  };

  void tulostaHenkilot (std::vector<Henkilo>& henkilot) {
        int heniloidenMaara;
        std::cout << "Kuinka monta henkilöä haluat syöttää? ";
        std::cin >> heniloidenMaara;
        
        for (size_t i = 0; i < heniloidenMaara; i++)
        {
            std::string nimi;
            int ika;
            std::cout << "Syötä henkilön nimi: ";
            std::cin >> nimi;
            std::cout << "Syötä henkilön ikä: ";
            std::cin >> ika;
            henkilot.push_back(Henkilo(nimi, ika));
    
        }

        std::cout << "\nSyötetyt henkilöt:\n";
        for (const auto& henkilo : henkilot) {
            std::cout << "Nimi: " << henkilo.getNimi() << ", Ikä: " << henkilo.getIka() << " vuotta\n";
        }
    
  }

  int main() {
    std::vector<Henkilo> henkilot;
    tulostaHenkilot(henkilot);
    return 0;
=======
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
>>>>>>> cb801d99ded9fde29868c38c53f26d79011d8f96
}