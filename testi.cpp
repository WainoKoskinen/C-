#include <iostream>
#include <vector>
#include <cassert>


class teht{

    public:
        teht(std::vector<int> luvut, std::vector<int> toiset_luvut){
            for(int i=0; i<luvut.size(); i++){
                for(int j=0; j<toiset_luvut.size(); j++){
                    if(luvut[i] == toiset_luvut[j]){
                        std::cout << luvut[i] << " ";
                    }
                }
            }
        }
        
};

int main() {

    std::vector<int> luvut = {1, 2, 3, 4, 5};
    std::vector<int> toiset_luvut = {5, 7, 8, 9, 10};


    teht t(luvut, toiset_luvut);

    return 0;
}