#include <string>
#include <iostream>


class Solution {
public:
    bool wordPattern(std::string pattern, std::string s) {

        

        for(int i = 0; i < pattern.size(); i++) {
          for(int j = 0; j < s.size(); j++){
            pattern[0] = s[0];
            if(pattern[i] != s[j]){
              return false;
             
            }
          }  
        }
}
};

int main(){
    Solution sol;
    std::string pattern = "abba";
    std::string s = "dog cat cat dog";
    bool result = sol.wordPattern(pattern, s);
    std::cout << std::boolalpha << result << std::endl;
    return 0;
}