#include <iostream>
#include <vector>



class Solution {
    public:
        int maxProfit(std::vector<int>& prices) {
            
           int i = 0;
           while(i < 5){
            std::cout << i;
           }
           
            
        }
};

int main(){
    Solution s;
    std::vector<int> prices = {7,1,5,3,6,4};
    std::cout << s.maxProfit(prices) << std::endl;
    return 0;
}