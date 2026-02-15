#include <iostream>
#include <vector>

class RadioBuffer {
private:
    std::vector<int> jono;
    const int MAX_KOKO = 5; // Puskuriin mahtuu vain 5 pakettia kerrallaan

public:
    // 1. Tämä ottaa dataa vastaan ja laittaa jonoon
    void vastaanotaData(int dataPaketti) {
        if (jono.size() < MAX_KOKO) {
            jono.push_back(dataPaketti);
            std::cout << "[OK] Paketti " << dataPaketti << " lisatty jonoon." << std::endl;
        } else {
            // TÄMÄ ON SE VIRHE, JONKA TESTAAJA NÄKI:
            std::cout << "[VIRHE] Puskuri taynna! Paketti hylatty." << std::endl;
        }
    }

    // 2. Tämän pitäisi lähettää data eteenpäin ja vapauttaa tilaa
    void lahetaEteenpain() {
        if (jono.empty()) {
            std::cout << "Ei lahetettavaa." << std::endl;
            return;
        }
        
        jono.clear();

        std::cout << ">>> Lahetetaan " << jono.size() << " pakettia taivaalle..." << std::endl;
        
        // Simuloidaan lähetys (tässä ei ole bugia)
        for (int paketti : jono) {
            std::cout << "   -> " << paketti << " lahti." << std::endl;
        }

        // --- KATSO TÄTÄ KOHTAA TARKKAAN ---
        // Kun paketit on lähetetty, mitä jonolle pitäisi tehdä?
        // Tekeekö koodi sen?
    }
};

// --- SIMULAATIO (Älä muuta tätä, tällä toistat vian) ---
int main() {
    RadioBuffer radio;

    // 1. Aluksi kaikki toimii
    std::cout << "--- TESTI ALKAA ---" << std::endl;
    radio.vastaanotaData(101);
    radio.vastaanotaData(102);
    radio.lahetaEteenpain(); // Pitäisi tyhjentää jono

    // 2. Lisää dataa tulee...
    radio.vastaanotaData(103);
    radio.vastaanotaData(104);
    radio.vastaanotaData(105);
    radio.vastaanotaData(106);
    radio.vastaanotaData(107); // Nyt jono on täynnä (5 kpl)

    // 3. Yritetään lähettää taas
    radio.lahetaEteenpain();

    // 4. Testaaja palaa kahvitauolta ja yrittää lisätä uutta dataa
    std::cout << "--- TESTAAJA PALAA KAHVILTA ---" << std::endl;
    radio.vastaanotaData(999); // BUGI: Tämän pitäisi onnistua, mutta onnistuuko?

    return 0;
}