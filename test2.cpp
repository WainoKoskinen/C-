#include <iostream>
#include <vector>

class Laskin{

    public:
    std::vector<int> luvut;
    int kerroin = 3;

    Laskin(std::vector<int> luvut){
     for(int i=0; i<luvut.size(); i++){
         if(luvut[i] % 2 == 0){
            luvut[i] *= kerroin;
         } 
         std::cout << luvut[i] << " ";
     }
}
};

int main() {
    std::vector<int> luvut = {1, 2, 3, 4, 5};
    Laskin laskin(luvut);
    return 0;
}