#ifndef KIRJA_H
#define KIRJA_H

#include <string>
#include <iostream>

class kirja {
    private:
        std::string nimi;
        std::string tekija;
        int sivumaara;

    public:
        kirja(const std::string& n, const std::string& t, int s)
            : nimi(n), tekija(t), sivumaara(s) {}

            void tulostatiedot() const {
    
    std::cout << "Nimi: " << nimi << std::endl;
    std::cout << "Tekija: " << tekija << std::endl;
    std::cout << "Sivumaara: " << sivumaara << std::endl;
}
};


#endif 