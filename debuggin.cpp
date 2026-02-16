#include <iostream>
#include <vector>

class SignalAnalyzer {
private:
    int kynnysarvo;

public:
    SignalAnalyzer(int raja) {
        kynnysarvo = raja;
    }

    double laskeTeho(std::vector<int> signaalit) {
        // BUGI 1 liittyy tähän muuttujaan...
        double summa = 0.0;
        double laskuri = 0.0;

        // BUGI 2: Tässä silmukassa on jotain pielessä rajoissa
        for (int i = 0; i < signaalit.size(); i++) {
            
            // Haluamme laskea vain signaalit, jotka ovat SUUREMPIA kuin kynnysarvo.
            // BUGI 3: Tekeekö tämä ehto niin?
            if (signaalit[i] > kynnysarvo) {
                summa += signaalit[i];
                laskuri++;
            }
        }

        // BUGI 4: Jakolasku antaa vääriä tuloksia (tasalukuja)
        // Lisäksi: Mitä jos laskuri on 0? (Nollalla jako)
        if (laskuri == 0) return 0.0;
        
        return summa / laskuri;
    }
};

// --- ÄLÄ KOSKE TÄHÄN (Tämä on testipenkki) ---
int main() {
    // Data: 5, 12, 3, 20, 8, 50
    // Kynnys: 10
    // Odotus: Pitäisi laskea (12 + 20 + 50) / 3 = 27.333...
    
    std::vector<int> data;
    data.push_back(5);
    data.push_back(12);
    data.push_back(3);
    data.push_back(20);
    data.push_back(8);
    data.push_back(50);

    SignalAnalyzer analysaattori(10);
    
    std::cout << "Odotettu tulos: n. 27.33" << std::endl;
    std::cout << "Ohjelman tulos: " << analysaattori.laskeTeho(data) << std::endl;

    return 0;
}