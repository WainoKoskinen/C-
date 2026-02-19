#include <iostream>
#include <cstring> // strlen
#include <cctype>  // isupper, isdigit

class PasswordStrength {
public:
    int score(const char* pw) {
        // 1. Null check
        if (pw == nullptr) {
            return -1;
        }

        int points = 0;
        int length = std::strlen(pw);

        // 2. Length check
        if (length >= 8) {
            points += 2;
        }

        // 3. Uppercase check
        bool hasUpper = false;
        for (int i = 0; i < length; i++) {
            if (std::isupper(pw[i])) {
                hasUpper = true;
                break; // Löytyi, ei tarvitse jatkaa silmukkaa
            }
        }
        if (hasUpper) {
            points += 1;
        }

        // 4. Digit check
        bool hasDigit = false;
        for (int i = 0; i < length; i++) {
            if (std::isdigit(pw[i])) {
                hasDigit = true;
                break;
            }
        }
        if (hasDigit) {
            points += 1;
        }

        return points;
    }
};

// --- SINUN TEHTÄVÄSI ---
// Kirjoita testit, jotka kattavat kaikki skenaariot.
// Olen auttanut ensimmäisen testin kanssa.

void assertEqual(const char* testName, int actual, int expected) {
    if (actual == expected) {
        std::cout << "[PASS] " << testName << std::endl;
    } else {
        std::cout << "[FAIL] " << testName << " -> Odotettiin: " << expected << ", Saatiin: " << actual << std::endl;
    }
}

int main() {
    PasswordStrength solver;

    assertEqual("Null Check", solver.score(nullptr), -1);

    assertEqual("Empty password", solver.score(""), 0); // Tyhjä salasana

    assertEqual("Short password", solver.score("abc"), 0); // Lyhyt salasana

    assertEqual("Long password without uppercase or digit", solver.score("abcdefgh"), 2); // Pitkä, mutta ei isoja kirjaimia eikä numeroita

    assertEqual("Long password with uppercase", solver.score("Abcdefgh"), 3); // Pitkä ja iso kirjain

    assertEqual("Long password with digit", solver.score("abcdefg1"), 3); // Pitkä ja numero

    assertEqual("Strong password", solver.score("Abcdefg1"), 4); // Pitkä, iso kirjain ja numero

    return 0;
}