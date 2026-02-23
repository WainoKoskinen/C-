#include <iostream>
#include <vector>

int main() {
    int i = 1;

    std::vector<int> prices = {7,6,4,3,1};
    
    int min = prices[0];
    int minday = prices[0];
    int max = prices[0];
    int maxday = prices[0];
    int profit = 0;

    while (i < prices.size()) {
        if (prices[i] < min) {
            min = prices[i];
            minday = i + 1;
        }
        else if (prices[i] > max) {
            max = prices[i];
            maxday = i + 1;
        }
        i++;  
    }

    profit = max - min;

    if(minday > maxday){
        profit = 0;
        std::cout << "No profit possible" << std::endl;
    } else {
        std::cout << "Buy on day " << minday << " at price " << min << std::endl;
        std::cout << "Sell on day " << maxday << " at price " << max << std::endl;
    }

    


    return 0;
}