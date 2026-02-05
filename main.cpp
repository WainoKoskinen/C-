#include <iostream> 
#include "kirja.h"


int main() {
    kirja k("Sota ja rauha", "Leo Tolstoi", 1225);
    kirja d("1984", "George Orwell", 328);

    k.tulostatiedot();
    d.tulostatiedot();


    return 0;
}