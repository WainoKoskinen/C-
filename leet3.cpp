#include <iostream>
#include <string>

class Solution {
public:
    int addDigits(int num) {
        int yhteensä = 0;
        std::string numero = std::to_string(num);
       
        yhteensä = (numero[0] - '0') + (numero[1] - '0');
        
        if(yhteensä < 10) {
            std::cout << yhteensä << std::endl;
            
        } else {
            std::cout << "yli 10" << std::endl;
        }
    }
};

int main() {
    Solution solution;
    int num = 54;
    int result = solution.addDigits(num);
    return 0;
}