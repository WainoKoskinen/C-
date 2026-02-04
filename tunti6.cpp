#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

class Kirja{
private:
    std::string nimi_;
    std::string tekija_;
    int julkaisuVuosi_;

    public:
        Kirja(std::string nimi, std::string tekija, int julkaisuVuosi)
         : nimi_(nimi), tekija_(tekija), julkaisuVuosi_(julkaisuVuosi) {}

        std::string getNimi() const { return nimi_; }
        std::string getTekija() const { return tekija_; }
        int getJulkaisuVuosi() const { return julkaisuVuosi_; }

};

void luetiedostosta(std::vector<Kirja>& kirjat) {
    std::ifstream tiedosto("kirjat.txt");
    if (!tiedosto.is_open()) {
        std::cerr << "Virhe avattaessa tiedostoa: kirjat.txt" << std::endl;
        return;
    }

    std::string rivi;
    while (std::getline(tiedosto, rivi)) {
        std::istringstream ss(rivi);
        std::string nimi, tekija;
        int julkaisuVuosi;

        if (std::getline(ss, nimi, ',') &&
            std::getline(ss, tekija, ',') &&
            ss >> julkaisuVuosi) {
            kirjat.push_back(Kirja(nimi, tekija, julkaisuVuosi));
        }
    };
}

int main() {
    std::vector<Kirja> kirjat;
    luetiedostosta(kirjat);

    std::cout << "Kirjat tiedostosta:\n";
    for (size_t i = 0; i < kirjat.size(); ++i) {
        std::cout << "Nimi: " << kirjat[i].getNimi() 
                  << ", Tekijä: " << kirjat[i].getTekija() 
                  << ", Julkaisuvuosi: " << kirjat[i].getJulkaisuVuosi() << std::endl;
    }

    return 0;
}