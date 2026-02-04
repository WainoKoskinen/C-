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
}