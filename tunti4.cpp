#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

int main(){
srand(time(0));
int luku = rand() % 100 + 1;
int summa = 0;
double keskiarvo;

for(int i = 0; i < 20; i++){
    luku = rand() % 100 + 1;
    summa += luku;
    keskiarvo = summa / 20.0;
    std::cout << i << "\n";
} 


    std::cout << summa << "\n";
    std::cout << keskiarvo << "\n";

}