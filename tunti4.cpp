//

#include <cstdlib>
#include <ctime>
#include <iostream>

int main()
{

    srand(time(0));
    int luku = rand() % 100 + 1;
    int summa = 0;
    double keskiarvo;
    std::cout << "moi\n";
    std::cout << luku << "\n";

    for (int i = 0; i < luku; i++)
    {
        summa += i;
    }

    keskiarvo = static_cast<double>(summa) / luku;

    if (luku % 2 == 0)
    {
        std::cout << luku << "luku on parillinen\n";
    }
    else
    {
        std::cout << luku << "luku on pariton\n";
    }

    std::cout << summa << "\n";
    std::cout << keskiarvo << "\n";
}